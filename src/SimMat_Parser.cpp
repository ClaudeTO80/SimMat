#include "SimMat_Base.h"
#include "SimMat_Parser.h"

using namespace SimMat::Runtime;

std::shared_ptr<SimMatEngine> SimMat_Parser::m_engine{ nullptr };
GenericVarSet SimMat_Parser::m_pool;
MATLABParser* m_parser=nullptr;
void SimMat_Parser::parseFile(const std::filesystem::path& scriptPath)
{
	std::ifstream fstr;
	fstr.open(scriptPath.c_str());
	parse(fstr);
}

void SimMat_Parser::parse(std::ifstream& scriptString)
{
	if (!m_engine.get())
	{
		m_engine=SimMatEngine::getInstance();
		m_pool = m_engine->commonPool();
	}

	antlr4::ANTLRInputStream input(scriptString);
	MATLABLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);
	MATLABParser parser(&tokens);
	m_parser = &parser;
	SimMat_Visitor visitor;
	visitor.visitMatlab_file(parser.matlab_file());
}

antlrcpp::Any SimMat_Parser::SimMat_Visitor::visitSt_assign(MATLABParser::St_assignContext* ctx)
{
	auto var1 = ctx->atom_var();
	m_currStatementOutputs.reset(new GenericVarSet());

	for (auto currVar : var1)
	{
		std::string varName(currVar->getText());
		m_currStatementOutputs->add(varName, std::make_shared<GenericVar>());
	}

	if (MATLABParser::Xpr_treeContext* tree = ctx->xpr_tree(); tree)
	{
		if (tree->atom_integer())
			m_currStatementOutputs->set(0, visit(tree).as<std::shared_ptr<GenericVar>>());

		else
		{
			antlrcpp::Any retVal=visit(tree);
			if (retVal.is<std::shared_ptr<GenericVar>>())
			{
				m_currStatementOutputs->set(0, retVal.as<std::shared_ptr<GenericVar>>());
			}
			else if (retVal.is<std::shared_ptr<GenericVarSet>>())
			{
				m_currStatementOutputs = retVal.as<std::shared_ptr<GenericVarSet>>();
			}
		}
		m_pool.append(m_currStatementOutputs);
	}

	return "";
}

antlrcpp::Any SimMat_Parser::SimMat_Visitor::visitXpr_array(MATLABParser::Xpr_arrayContext* ctx)
{
	std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(0,0);

	int dim= ctx->children.size();
	int row=0;
	int col=0;

	for (int i = 1; i < dim-1; ++i)
	{
		auto curr = ctx->children[i];
		if (dynamic_cast<MATLABParser::Xpr_treeContext*>(curr))
		{
			auto cc = visit(curr);
			if (cc.is<std::shared_ptr<GenericVarSet>>())
			{
				std::shared_ptr<GenericVarSet> ss = cc.as< std::shared_ptr<GenericVarSet>>();
				std::shared_ptr<GenericVar> ff = ss->get(0)->second;
				if (ff->isArray())
				{
					if (ff->isDouble())
					{
						std::shared_ptr<Eigen::MatrixXd> aa = ff->as<Eigen::MatrixXd>();
						int dim1 = (int)aa->rows();
						int dim2 = (int)aa->cols();
						int lastRow = row + dim1;
						int lastCol = col + dim2;
								
						int newRowDim = std::max(lastRow,(int)temp->rows());
						int newColDim = std::max(lastCol,(int)temp->cols());

						if (newRowDim > temp->rows() || newColDim > temp->cols())
							temp->conservativeResize(newRowDim, newColDim);
							
						temp->block(row,col,dim1,dim2)= aa->block(0, 0, dim1, dim2);
						col += dim2;
					}
				}
			}
			else if (cc.is<std::shared_ptr<GenericVar>>())
			{
				std::shared_ptr<GenericVar> ff = cc.as< std::shared_ptr<GenericVar>>();
				if (ff->isScalar())
				{
					int newRowDim = std::max(row+1, (int)temp->rows());
					int newColDim = std::max(col+1, (int)temp->cols());

					if (newRowDim > temp->rows() || newColDim > temp->cols())
						temp->conservativeResize(newRowDim, newColDim);

					if (ff->isInt())
					{
						int value = *(ff->as<int>().get());
						double& dd = temp->coeffRef(row, col);
						dd= value;
					}

					else if (ff->isFloat())
					{
						float value = *(ff->as<float>().get());
						double& dd = temp->coeffRef(row, col);
						dd = value;
					}

					else if (ff->isDouble())
					{
						double value = *(ff->as<double>().get());
						double& dd = temp->coeffRef(row, col);
						dd = value;
					}

					++col;
				}
			}

		}
		else if (!curr->getText().compare(";"))
		{
			++row;
			col = 0;
		}
	}

	return std::make_shared<GenericVar>(temp);
}

std::shared_ptr<GenericVar> SimMat_Parser::SimMat_Visitor::MatrixOp(antlr4::tree::ParseTree* child1, antlr4::tree::ParseTree* child2,OP op)
{
	antlrcpp::Any out;
	std::shared_ptr<GenericVar> v1, v2;
	out = visit(child1);
	if (out.is<std::shared_ptr<GenericVar>>())
		v1 = out.as<std::shared_ptr<GenericVar>>();
	else if (out.is<std::shared_ptr<GenericVarSet>>())
		v1 = out.as<std::shared_ptr<GenericVarSet>>()->get(0)->second;

	out = visit(child2);
	if (out.is<std::shared_ptr<GenericVar>>())
		v2 = out.as<std::shared_ptr<GenericVar>>();
	else if (out.is<std::shared_ptr<GenericVarSet>>())
		v2 = out.as<std::shared_ptr<GenericVarSet>>()->get(0)->second;

	std::shared_ptr<Eigen::MatrixXd> g1 = nullptr;
	std::shared_ptr<Eigen::MatrixXd> g2 = nullptr;
	g1 = v1->as<Eigen::MatrixXd>();
	g2 = v2->as<Eigen::MatrixXd>();
	GenericVarSet temp;
	int dim1 = (int)g1->rows();
	int dim2 = (int)g2->cols();
	std::shared_ptr<GenericVar> value = std::make_shared<GenericVar>(new Eigen::MatrixXd(dim1, dim2));
	Eigen::MatrixXd p(dim1, dim2);
	switch (op)
	{
	case OP::SUM: p = *g1.get() + *g2.get(); break;
	case OP::DIFF: p = *g1.get() - *g2.get(); break;
	case OP::TIMES: p = *g1.get() * *g2.get(); break;
	case OP::DIV: /*p = *g1.get() / *g2.get();*/ break;
	
	}
	auto M = Eigen::Map<Eigen::MatrixXd>(p.array().data(), dim1, dim2);
	*(value.get()->as<Eigen::MatrixXd>().get()) = M;
	return value;
}

antlrcpp::Any SimMat_Parser::SimMat_Visitor::visitXpr_tree(MATLABParser::Xpr_treeContext* ctx)
{
	if (auto trees = ctx->xpr_tree(); trees.size() == 1)
	{
		if (ctx->children.size() > 1 && ctx->children[1] == trees[0])
		{
			if (ctx->LEFT_PARENTHESIS() && ctx->RIGHT_PARENTHESIS())
			{
				return visit(ctx->children[1]);
			}

			else if (auto num = ctx->PLUS(); num)
			{
				std::shared_ptr<GenericVar> v1 = visit(ctx->children[1]).as<std::shared_ptr<GenericVar>>();
				return std::make_shared<GenericVar>(v1);
			}

			else if (auto num = ctx->MINUS(); num)
			{
				std::shared_ptr<GenericVar> v1 = visit(ctx->children[1]).as<std::shared_ptr<GenericVar>>();
				int* value = new int[1];
				*value = -1*(*v1->as<int>().get());
				return std::make_shared<GenericVar>(value);
			}
		}
	}

	if (auto trees = ctx->xpr_tree(); trees.size() > 1)
	{
		OP op;
		if (auto num = ctx->PLUS(); num)
		{
			op = OP::SUM;
		}
		else if (auto num = ctx->MINUS(); num)
		{
			op = OP::DIFF;
		}
		else if (auto num = ctx->TIMES(); num)
		{
			op = OP::TIMES;
		}
		/*else if (auto num = ctx->RIGHT_DIVIDE(); num)
		{
			return visit(ctx->children[0]).as<int>() / visit(ctx->children[2]).as<int>();
		}*/
		return MatrixOp(ctx->children[0], ctx->children[2], op);
	}

	else if (auto num = ctx->atom_integer(); num)
	{
		int* value = new int[1];
		*value = std::atoi(num->getText().c_str());
		return std::make_shared<GenericVar>(value);
	}
	else if (auto num = ctx->atom_float(); num)
	{
		float* value = new float[1];
		*value = std::atoi(num->getText().c_str());
		return std::make_shared<GenericVar>(value);
	}
	else if (auto num = ctx->atom_imaginary(); num)
	{
		std::complex<double>* value = new std::complex<double>[1];
		return std::make_shared<GenericVar>(value);
	}

	else if (auto var = ctx->atom_var(); var)
	{
		return m_pool.get(var->getText());
	}
	else if (auto num = ctx->atom_string(); num)
	{
		std::string* value = new std::string[1];
		*value = num->getText().c_str();
		return std::make_shared<GenericVar>(value);
	}

	return visitChildren(ctx);
}

antlrcpp::Any SimMat_Parser::SimMat_Visitor::visitFunc_arg(MATLABParser::Func_argContext* ctx) 
{
	return visit(ctx->xpr_tree());
}

antlrcpp::Any SimMat_Parser::SimMat_Visitor::visitXpr_function(MATLABParser::Xpr_functionContext* ctx)
{
	static bool innerBase = false;
	std::string funcName(ctx->atom_var()->getText());
	auto args = ctx->func_arg();
	GenericVarSet argsIn;
	int ind = 0;
	if (!innerBase)
	{
		innerBase = true;
		std::shared_ptr<GenericVarSet> argsOut(new GenericVarSet());

		if (dynamic_cast<MATLABParser::St_assignContext*>(ctx->parent->parent))
		{
			argsOut->append(m_currStatementOutputs);
		}
		std::for_each(args.begin(), args.end(), [&](MATLABParser::Func_argContext* currArg) {
			argsIn.add(std::to_string(ind++), visit(currArg).as<std::shared_ptr<GenericVar>>());
			});

		callFunc(funcName, argsIn, *(argsOut.get()));
		innerBase = false;
		return argsOut;
	}

	else
	{
		GenericVarSet localPool;
		std::string varName("temp");
		localPool.add(varName, std::make_shared<GenericVar>());
		std::for_each(args.begin(), args.end(), [&](MATLABParser::Func_argContext* currArg) {
			argsIn.add(std::to_string(ind++), visit(currArg).as<std::shared_ptr<GenericVar>>());
			});
		callFunc(funcName, argsIn, localPool);
		return localPool.get("temp");
	}
	return "";
}

antlrcpp::Any SimMat_Parser::SimMat_Visitor::visitXpr_basefunction(MATLABParser::Xpr_basefunctionContext* ctx)
{
	static bool innerBase = false;
	std::string funcName(ctx->BASE_FUNC()->getText());
	auto args = ctx->func_arg();
	GenericVarSet argsIn;
	int ind = 0;
	if (!innerBase)
	{
		innerBase = true;
		std::shared_ptr<GenericVarSet> argsOut(new GenericVarSet());

		if (dynamic_cast<MATLABParser::St_assignContext*>(ctx->parent->parent))
		{
			argsOut->append(m_currStatementOutputs);
		}
		std::for_each(args.begin(), args.end(), [&](MATLABParser::Func_argContext* currArg) {
			argsIn.add(std::to_string(ind++), visit(currArg).as<std::shared_ptr<GenericVar>>());
			});

		callFunc(funcName, argsIn, *(argsOut.get()));
		innerBase = false;
		return argsOut;
	}

	else
	{
		GenericVarSet localPool;
		std::string varName("temp");
		localPool.add(varName, std::make_shared<GenericVar>());
		std::for_each(args.begin(), args.end(), [&](MATLABParser::Func_argContext* currArg) {
			argsIn.add(std::to_string(ind++), visit(currArg).as<std::shared_ptr<GenericVar>>());
			});
		callFunc(funcName, argsIn, localPool);
		return localPool.get("temp");
	}
	return "";
}

antlrcpp::Any SimMat_Parser::SimMat_Visitor::visitStatement(MATLABParser::StatementContext* ctx) 
{
	try
	{
		if (MATLABParser::St_assignContext* assign = ctx->st_assign(); assign)
			visit(assign);
	}
	catch (WrongParameter& e)
	{
		std::cout << "Error at line " << ctx->start->getLine() << ": " << e.what() << std::endl;
	}
	if (!ctx->SEMI_COLON())
	{
		std::shared_ptr<GenericVarSet> printPool = m_currStatementOutputs;
		for (size_t i = 0; i < printPool->size(); ++i)
		{
			auto currVar = printPool->get(i);
			std::cout << currVar->first << " =" << std::endl;
			std::shared_ptr<GenericVar> var = currVar->second;

			if (var->isArray() && var->isDouble() && !var->isComplex())
			{
				Eigen::MatrixXd* tt = var->as<Eigen::MatrixXd>().get();
				std::cout << *(var->as<Eigen::MatrixXd>().get()) << std::endl;
			}
			if (var->isScalar() && var->isComplex() && var->isInt())
				std::cout << *(var->as<std::complex<int>>().get()) << std::endl;
			if (var->isScalar() && var->isComplex() && var->isFloat())
			{
				std::complex<float>temp = *(var->as<std::complex<float>>().get());
				std::cout << "\t";

				if (float val=temp.real();val)
					std::cout << val;

				if (float val = temp.imag(); val)
					std::cout << val<<"i";

				if (!temp.real() && !temp.imag())
					std::cout << 0;

				std::cout << std::endl;
			}

			if (var->isScalar() && var->isInt() && !var->isComplex())
				std::cout << *(var->as<int>().get()) << std::endl;
			if (var->isScalar() && var->isFloat() && !var->isComplex())
				std::cout << *(var->as<float>().get()) << std::endl;
			if (var->isScalar() && var->isDouble() && !var->isComplex())
				std::cout << *(var->as<double>().get()) << std::endl;

		}
	}

	return "";
}
