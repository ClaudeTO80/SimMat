#pragma once
#include <string>
#include <filesystem>
#include "MATLABBaseVisitor.h"
#include "MATLABLexer.h"
#include "GenericVarSet.h"
#include "GenericVarSet.h"
#include "tree\ParseTree.h"



namespace SimMat
{
	namespace Runtime
	{
		class SimMat_Parser
		{
		public:
			static void parseFile(const std::filesystem::path& scriptPath);
			static void parse(std::ifstream& scriptString);
			static GenericVarSet m_pool;
		private:
			static std::shared_ptr<SimMatEngine> m_engine;

			class SimMat_Visitor : public MATLABBaseVisitor
			{
			public:
				enum class OP
				{
					SUM = 0,
					DIFF = 1,
					TIMES = 2,
					DIV=3,
				};
				antlrcpp::Any visitSt_assign(MATLABParser::St_assignContext* ctx) override;
				antlrcpp::Any visitXpr_tree(MATLABParser::Xpr_treeContext* ctx) override;
				antlrcpp::Any visitXpr_array(MATLABParser::Xpr_arrayContext* ctx) override;
				antlrcpp::Any visitFunc_arg(MATLABParser::Func_argContext* ctx) override;
				antlrcpp::Any visitXpr_function(MATLABParser::Xpr_functionContext* ctx) override;
				antlrcpp::Any visitXpr_basefunction(MATLABParser::Xpr_basefunctionContext* ctx) override;
				antlrcpp::Any visitStatement(MATLABParser::StatementContext* ctx) override;
				std::shared_ptr<GenericVar> MatrixOp(antlr4::tree::ParseTree* child1, antlr4::tree::ParseTree* child2,OP op);

			private:
				std::shared_ptr<GenericVarSet> m_currStatementOutputs{ nullptr };
			};
		};

		
	}
}