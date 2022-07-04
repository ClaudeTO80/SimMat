#include <iostream>
#include <fstream>
#include "SimMat_Base.h"
#include "GnuPlot.h"
#include <stdio.h>
#include <stdlib.h>
#include <Eigen/Sparse>
#include <unsupported/Eigen/src/SparseExtra/MarketIO.h>
//#include <Eigen/SVD> 

using namespace SimMat::Runtime;
std::map<std::string, std::function<SIMMAT_RET_VALUES(const GenericVarSet&, GenericVarSet&)>> basicFuncs::m_funcs;
std::shared_ptr<SimMatEngine> SimMatEngine::m_instance{ nullptr };
GenericVarSet SimMatEngine::m_commonPool;

void f(std::ostream& x,int iter, double error)
{
	#pragma omp parallel
	#pragma omp single
	{
		x << "Iteration: " << iter << "\t==>\t";
		x << "Error: " << error << std::endl;
	}
}

// this is a functor
//struct sendLog {
//	sendLog(std::ostream& x) : m_x(x) {}  // Constructor
//	void operator()(int iter, double error) { f(m_x,iter, error); }
//
//private:
//	std::ostream& m_x;
//};

//https://github.com/dthul/matfile
void test()
{
	typedef Eigen::SparseMatrix<double, Eigen::RowMajor>SMatrixXd;
	SMatrixXd A;
	Eigen::loadMarket(A, R"(C:\Development\Numerical\matrix\sherman5.mtx)");
	
	Eigen::VectorXd x(A.rows());
	Eigen::MatrixXd b(A.rows(),1);
	b.setRandom();
	//Eigen::SparseMatrix<double> A(n, n);
	// fill A and b
	Eigen::BiCGSTAB<SMatrixXd, Eigen::IncompleteLUT<double>> m1;
	Eigen::BiCGSTAB<SMatrixXd, Eigen::DiagonalPreconditioner<double>> m2;
	Eigen::BiCGSTAB<SMatrixXd, Eigen::IdentityPreconditioner> m3;
	//sendLog log(std::cout);
	m1.compute(A);
	std::ofstream ofs(R"(C:\tmp\log.out)");
	m1.setCallback(ofs,f);
	x = m1.solve(b);
	std::cout << "#iterations:     " << m1.iterations() << std::endl;
	std::cout << "estimated error: " << m1.error() << std::endl;

	m2.compute(A);
	x = m2.solve(b);
	std::cout << "#iterations:     " << m2.iterations() << std::endl;
	std::cout << "estimated error: " << m2.error() << std::endl;

	m3.compute(A);
	x = m3.solve(b);
	std::cout << "#iterations:     " << m3.iterations() << std::endl;
	std::cout << "estimated error: " << m3.error() << std::endl;

	//Eigen::MatrixXd d = A * x;
	//-b;
	//auto temp=Eigen::abs((A * x - b)).data();

	int a = 0;
}

std::shared_ptr<SimMatEngine> SimMatEngine::start() 
{

	if (!m_instance.get())
	{
		m_instance.reset(new SimMatEngine());
		basicFuncs::popoluteFuncs();
	}
	return m_instance;
}

std::shared_ptr<SimMatEngine> SimMatEngine::getInstance() 
{

	if (!m_instance.get())
		start();

	return m_instance;
}

GenericVarSet& SimMatEngine::commonPool()
{
	return m_commonPool;
}

SIMMAT_RET_VALUES SimMat::Runtime::zeros(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	Eigen::MatrixXd* temp = initMatrix<Eigen::MatrixXd>(argsIn);
	temp->setZero();
	argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
	return SIMMAT_RET_VALUES::OK;
}

SIMMAT_RET_VALUES SimMat::Runtime::ones(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	Eigen::MatrixXd* temp = initMatrix<Eigen::MatrixXd>(argsIn);
	temp->setOnes();
	argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
	return SIMMAT_RET_VALUES::OK;
}


SIMMAT_RET_VALUES SimMat::Runtime::eye(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	Eigen::MatrixXd* temp = initMatrix<Eigen::MatrixXd>(argsIn);
	temp->setIdentity();
	argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
	return SIMMAT_RET_VALUES::OK;
}


SIMMAT_RET_VALUES SimMat::Runtime::linspace(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	std::shared_ptr<GenericVar> var = argsIn.get(0);
	double low = 0;
	double high = 0;
	int size = 100;

	if (var->isScalar())
	{
		if (!var->isComplex())
		{
			if (var->isDouble())	low = (double)(*(var->as<double>().get()));
			if (var->isFloat())		low = (double)(*(var->as<float>().get()));
			if (var->isInt())		low = (double)(*(var->as<int>().get()));
		}
	}

	if (var = argsIn.get(1))
	{
		if (var->isScalar())
		{
			if (!var->isComplex())
			{
				if (var->isDouble())	high = (double)(*(var->as<double>().get()));
				if (var->isFloat())		high = (double)(*(var->as<float>().get()));
				if (var->isInt())		high = (double)(*(var->as<int>().get()));
			}
		}
	}

	if (argsIn.size() == 3)
	{
		var = argsIn.get(2);
		if (var->isScalar())
		{
			if (!var->isComplex())
			{
				if (var->isDouble())	size = (int)(*(var->as<double>().get()));
				if (var->isFloat())		size = (int)(*(var->as<float>().get()));
				if (var->isInt())		size = (int)(*(var->as<int>().get()));
			}
		}
	}

	std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(1, size);

	double step = (high - low) / ((long long)size - 1);

	#pragma omp parallel for 
	for (int i = 0; i < size; ++i)
		(*temp)(0, i) = low + (i * step);

	argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
	return SIMMAT_RET_VALUES::OK;
}

SIMMAT_RET_VALUES SimMat::Runtime::sin(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	std::shared_ptr<GenericVar> arg = argsIn.get(0);
	if (arg->isArray())
	{
		if (!arg->isComplex())
		{
			if (arg->isDouble())
			{
				std::shared_ptr<Eigen::MatrixXd> inValue = arg->as<Eigen::MatrixXd>();
				std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());

				*(temp.get()) = (inValue.get())->array().sin();
				argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
				return SIMMAT_RET_VALUES::OK;
			}
		}
	}

	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}

SIMMAT_RET_VALUES SimMat::Runtime::cos(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	std::shared_ptr<GenericVar> arg = argsIn.get(0);
	if (arg->isArray())
	{
		if (!arg->isComplex())
		{
			if (arg->isDouble())
			{
				std::shared_ptr<Eigen::MatrixXd> inValue = arg->as<Eigen::MatrixXd>();
				std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());

				*(temp.get()) = (inValue.get())->array().cos();
				argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
				return SIMMAT_RET_VALUES::OK;
			}
		}
	}

	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}

SIMMAT_RET_VALUES SimMat::Runtime::tan(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	std::shared_ptr<GenericVar> arg = argsIn.get(0);
	if (arg->isArray())
	{
		if (!arg->isComplex())
		{
			if (arg->isDouble())
			{
				std::shared_ptr<Eigen::MatrixXd> inValue = arg->as<Eigen::MatrixXd>();
				std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());

				*(temp.get()) = (inValue.get())->array().tan();
				argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
				return SIMMAT_RET_VALUES::OK;
			}
		}
	}

	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}

SIMMAT_RET_VALUES SimMat::Runtime::asin(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	std::shared_ptr<GenericVar> arg = argsIn.get(0);
	if (arg->isArray())
	{
		if (!arg->isComplex())
		{
			if (arg->isDouble())
			{
				std::shared_ptr<Eigen::MatrixXd> inValue = arg->as<Eigen::MatrixXd>();
				std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());

				*(temp.get()) = (inValue.get())->array().asin();
				argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
				return SIMMAT_RET_VALUES::OK;
			}
		}
	}

	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}

SIMMAT_RET_VALUES SimMat::Runtime::acos(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	std::shared_ptr<GenericVar> arg = argsIn.get(0);
	if (arg->isArray())
	{
		if (!arg->isComplex())
		{
			if (arg->isDouble())
			{
				std::shared_ptr<Eigen::MatrixXd> inValue = arg->as<Eigen::MatrixXd>();
				std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());

				*(temp.get()) = (inValue.get())->array().acos();
				argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
				return SIMMAT_RET_VALUES::OK;
			}
		}
	}

	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}

SIMMAT_RET_VALUES SimMat::Runtime::atan(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	std::shared_ptr<GenericVar> arg = argsIn.get(0);
	if (arg->isArray())
	{
		if (!arg->isComplex())
		{
			if (arg->isDouble())
			{
				std::shared_ptr<Eigen::MatrixXd> inValue = arg->as<Eigen::MatrixXd>();
				std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());

				*(temp.get()) = (inValue.get())->array().atan();
				argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
				return SIMMAT_RET_VALUES::OK;
			}
		}
	}

	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}

SIMMAT_RET_VALUES SimMat::Runtime::sinh(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	std::shared_ptr<GenericVar> arg = argsIn.get(0);
	if (arg->isArray())
	{
		if (!arg->isComplex())
		{
			if (arg->isDouble())
			{
				std::shared_ptr<Eigen::MatrixXd> inValue = arg->as<Eigen::MatrixXd>();
				std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());
				*(temp.get()) = (inValue.get())->array().sinh();
				argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
				return SIMMAT_RET_VALUES::OK;
			}
		}
	}

	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}

SIMMAT_RET_VALUES SimMat::Runtime::cosh(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	std::shared_ptr<GenericVar> arg = argsIn.get(0);
	if (arg->isArray())
	{
		if (!arg->isComplex())
		{
			if (arg->isDouble())
			{
				std::shared_ptr<Eigen::MatrixXd> inValue = arg->as<Eigen::MatrixXd>();
				std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());

				*(temp.get()) = (inValue.get())->array().cosh();
				argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
				return SIMMAT_RET_VALUES::OK;
			}
		}
	}

	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}

SIMMAT_RET_VALUES SimMat::Runtime::tanh(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	std::shared_ptr<GenericVar> arg = argsIn.get(0);
	if (arg->isArray())
	{
		if (!arg->isComplex())
		{
			if (arg->isDouble())
			{
				std::shared_ptr<Eigen::MatrixXd> inValue = arg->as<Eigen::MatrixXd>();
				std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());

				*(temp.get()) = (inValue.get())->array().tanh();
				argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
				return SIMMAT_RET_VALUES::OK;
			}
		}
	}

	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}

SIMMAT_RET_VALUES SimMat::Runtime::linsolve(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	if (argsIn.size() < 2)
		return SIMMAT_RET_VALUES::TOO_FEW_ARGSIN;

	if (argsIn.size() > 2)
		return SIMMAT_RET_VALUES::TOO_MUCH_ARGSIN;

	if (auto mat = argsIn.get(0); mat->isArray())
	{
		if (auto rhs = argsIn.get(1); rhs->isArray())
		{
			if (mat->isDouble())
			{
				std::shared_ptr<Eigen::MatrixXd> A = mat->as<Eigen::MatrixXd>();
				if (A->rows() == A->cols())
				{
					if (rhs->isDouble())
					{
						std::shared_ptr<Eigen::MatrixXd> b = rhs->as<Eigen::MatrixXd>();
						if (b->rows() == A->cols())
							luSolve(argsIn, argsOut);
						else
							return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
					}
				}

				else
				{
					if (rhs->isDouble())
					{
						std::shared_ptr<Eigen::MatrixXd> b = rhs->as<Eigen::MatrixXd>();
						if (b->rows() == A->rows())
							qrSolve(argsIn, argsOut);
						else
							return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
					}
				}
			}
		}
		else
			return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
	}
	else
		return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;

	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}

SIMMAT_RET_VALUES SimMat::Runtime::rand(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	if (argsIn.size() >2)
		return SIMMAT_RET_VALUES::TOO_MUCH_ARGSIN;

	int dim1 = 1;
	int dim2 = 1;

	if (argsIn.size() >= 1)
	{
		auto currDim = argsIn.get(0);
		if (currDim->isScalar() && !currDim->isComplex())
		{
			if (currDim->isDouble())
				dim1 = (int)(*(currDim->as<double>().get()));

			if (currDim->isFloat())
				dim1 = (int)(*(currDim->as<float>().get()));

			if (currDim->isInt())
				dim1 = (int)(*(currDim->as<int>().get()));
		}

		if (argsIn.size() == 2)
		{
			currDim = argsIn.get(1);
			if (currDim->isDouble())
				dim2 = (int)(*(currDim->as<double>().get()));

			if (currDim->isFloat())
				dim2 = (int)(*(currDim->as<float>().get()));

			if (currDim->isInt())
				dim2 = (int)(*(currDim->as<int>().get()));
		}

		else
			dim2 = dim1;

		std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(dim1,dim2);
		temp->setRandom();
		argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
		return SIMMAT_RET_VALUES::OK;
	}
}

SIMMAT_RET_VALUES SimMat::Runtime::inv(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	std::shared_ptr<GenericVar> arg = argsIn.get(0);
	if (arg->isArray())
	{
		if (!arg->isComplex())
		{
			if (arg->isDouble())
			{
				std::shared_ptr<Eigen::MatrixXd> inValue = arg->as<Eigen::MatrixXd>();
				std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());
				*(temp.get()) = (inValue.get())->inverse();
				argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
				return SIMMAT_RET_VALUES::OK;
			}
		}
	}

	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}

//https://gist.github.com/molpopgen/9123133
SIMMAT_RET_VALUES SimMat::Runtime::save(const GenericVarSet& argsIn, std::ostream& os)
{
	for (auto currVar: argsIn)
	{
		auto curr = currVar.second;
		uint8_t ndims = 0;
		uint8_t vartype = 0;
		uint64_t currSize = 0;
		if (curr->isScalar())	ndims = 1;
		if (curr->isArray())	ndims = 2;

		if (curr->isFloat())	vartype += (int)VarType::SINGLE;
		if (curr->isDouble())	vartype += (int)VarType::DOUBLE;
		if (curr->isInt())		vartype += (int)VarType::INT;
		if (curr->isComplex())		
			vartype += (int)VarType::COMPLEX;
		else
			vartype += (int)VarType::REAL;
		
		std::string name(currVar.first);
		unsigned int nameDim = (unsigned int)name.size();
		os.write(reinterpret_cast<const char*>(&nameDim), sizeof(unsigned int));
		os.write(reinterpret_cast<const char*>(name.c_str()), nameDim*sizeof(char));

		os.write(reinterpret_cast<char*>(&vartype), sizeof(uint8_t));
		os.write(reinterpret_cast<char*>(&ndims), sizeof(uint8_t));
		
		if (curr->isArray())
		{
			if (!curr->isComplex())
			{
				uint32_t nrows = 0;
				uint32_t ncols = 0;
				unsigned int varDim = 0;
				bool isRowMajor = false;
				void* p = nullptr;
				if (curr->isDouble())
				{
					auto var = curr->as<Eigen::MatrixXd>();
					nrows = var->rows();
					ncols = var->cols();
					isRowMajor = var->IsRowMajor;
					varDim = sizeof(double);
					p = var->data();
				}

				else if (curr->isFloat())
				{
					auto var = curr->as<Eigen::MatrixXf>();
					nrows = var->rows();
					ncols = var->cols();
					isRowMajor = var->IsRowMajor;
					varDim = sizeof(float);
					p = var->data();
				}

				else if (curr->isInt())
				{
					auto var = curr->as<Eigen::MatrixXi>();
					nrows = var->rows();
					ncols = var->cols();
					isRowMajor = var->IsRowMajor;
					varDim = sizeof(int);
					p = var->data();
				}

				os.write(reinterpret_cast<char*>(&nrows), sizeof(uint32_t));
				os.write(reinterpret_cast<char*>(&ncols), sizeof(uint32_t));
				os.write(reinterpret_cast<char*>(&isRowMajor), sizeof(char));
				os.write(reinterpret_cast<char*>(p), nrows * ncols * varDim);
			}
		}
	}

	return SIMMAT_RET_VALUES::OK;
}

SIMMAT_RET_VALUES SimMat::Runtime::load(GenericVarSet& argsOut, std::istream& is)
{
	unsigned int nameDim;
	is.read((char*)&nameDim, sizeof(unsigned int));
	std::string name;
	name.resize(nameDim);
	is.read(reinterpret_cast<char*>(name.data()), nameDim * sizeof(char));
	uint8_t vartype = 0;
	uint8_t ndims = 0;
	is.read(reinterpret_cast<char*>(&vartype), sizeof(uint8_t));
	is.read(reinterpret_cast<char*>(&ndims), sizeof(uint8_t));
	uint32_t nrows = 0;
	uint32_t ncols = 0;
	bool isRowMajor = false;
	is.read(reinterpret_cast<char*>(&nrows), sizeof(uint32_t));
	is.read(reinterpret_cast<char*>(&ncols), sizeof(uint32_t));
	is.read(reinterpret_cast<char*>(&isRowMajor), sizeof(char));
	std::vector<double> p;
	p.resize(nrows * ncols);
	is.read(reinterpret_cast<char*>(p.data()), nrows * ncols * sizeof(double));
	std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(nrows, ncols);
	//Eigen::MatrixXd temp= Eigen::Map<Eigen::MatrixXd, Eigen::Unaligned>(p.data(), nrows, ncols);
	Eigen::Map<Eigen::MatrixXd> my_vect(p.data(), nrows, ncols);
	*(temp.get()) = my_vect;
	/*for (auto currVar : argsIn)
	{
		auto curr = currVar.second;
		uint8_t ndims = 0;
		uint8_t vartype = 0;
		uint64_t currSize = 0;
		if (curr->isScalar())	ndims = 1;
		if (curr->isArray())	ndims = 2;

		if (curr->isFloat())	vartype += (int)VarType::SINGLE;
		if (curr->isDouble())	vartype += (int)VarType::DOUBLE;
		if (curr->isInt())		vartype += (int)VarType::INT;
		if (curr->isComplex())
			vartype += (int)VarType::COMPLEX;
		else
			vartype += (int)VarType::REAL;

		std::string name(currVar.first);
		unsigned int nameDim = (unsigned int)name.size();
		os.write(reinterpret_cast<const char*>(&nameDim), sizeof(unsigned int));
		os.write(reinterpret_cast<const char*>(name.c_str()), nameDim * sizeof(char));

		os.write(reinterpret_cast<char*>(&vartype), sizeof(uint8_t));
		os.write(reinterpret_cast<char*>(&ndims), sizeof(uint8_t));

		if (curr->isArray())
		{
			if (!curr->isComplex())
			{
				uint32_t nrows = 0;
				uint32_t ncols = 0;
				unsigned int varDim = 0;
				bool isRowMajor = false;
				void* p = nullptr;
				if (curr->isDouble())
				{
					auto var = curr->as<Eigen::MatrixXd>();
					nrows = var->rows();
					ncols = var->cols();
					isRowMajor = var->IsRowMajor;
					varDim = sizeof(double);
					p = var->data();
				}

				else if (curr->isFloat())
				{
					auto var = curr->as<Eigen::MatrixXf>();
					nrows = var->rows();
					ncols = var->cols();
					isRowMajor = var->IsRowMajor;
					varDim = sizeof(float);
					p = var->data();
				}

				else if (curr->isInt())
				{
					auto var = curr->as<Eigen::MatrixXi>();
					nrows = var->rows();
					ncols = var->cols();
					isRowMajor = var->IsRowMajor;
					varDim = sizeof(int);
					p = var->data();
				}

				os.write(reinterpret_cast<char*>(&nrows), sizeof(uint32_t));
				os.write(reinterpret_cast<char*>(&ncols), sizeof(uint32_t));
				os.write(reinterpret_cast<char*>(&isRowMajor), sizeof(char));
				os.write(reinterpret_cast<char*>(p), nrows * ncols * varDim);
			}
		}
	}*/

	return SIMMAT_RET_VALUES::OK;
}

SIMMAT_RET_VALUES SimMat::Runtime::qr(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	std::shared_ptr<GenericVar> arg = argsIn.get(0);
	if (arg->isArray())
	{
		if (!arg->isComplex())
		{
			if (arg->isDouble())
			{
				std::shared_ptr<Eigen::MatrixXd> inValue = arg->as<Eigen::MatrixXd>();
				if (argsOut.size() == 2)
				{
					//std::shared_ptr<Eigen::MatrixXd> Q = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->rows());
					//std::shared_ptr<Eigen::MatrixXd> R = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());
					//auto rr = (inValue.get())->householderQr();
					//*(Q.get()) = rr.matrixQ();
					//*(R.get()) = rr.matrixR().array();
					//*(QR.get()) = rr.matrixQR().array();
					////*(QR.get()) = rr.nonzeroPivots();
					////std::shared_ptr<Eigen::MatrixXd> qr=rr.matrixQR();
					//auto pr = rr.nonzeroPivots();
					////*(temp.get()) = (inValue.get())->array().sinh();
					//argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(Q)));
					//argsOut.set(1, std::shared_ptr<GenericVar>(new GenericVar(QR)));
					return SIMMAT_RET_VALUES::OK;
				}
			}
		}
	}

	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}

SIMMAT_RET_VALUES SimMat::Runtime::luSolve(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	std::shared_ptr<GenericVar> arg = argsIn.get(0);
	if (arg->isArray())
	{
		if (!arg->isComplex())
		{
			if (arg->isDouble())
			{
				std::shared_ptr<Eigen::MatrixXd> A = arg->as<Eigen::MatrixXd>();
				std::shared_ptr<GenericVar> rhs = argsIn.get(1);
				std::shared_ptr<Eigen::MatrixXd> b = rhs->as<Eigen::MatrixXd>();
				int rows = A->rows();
				int cols = b->cols();
				std::shared_ptr<Eigen::MatrixXd> x = initMatrix<Eigen::MatrixXd>(rows, cols); 
				x->setZero();
				*(x.get())= (A.get())->partialPivLu().solve(*(b.get()));
				argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(x)));
				return SIMMAT_RET_VALUES::OK;
			}
		}
	}

	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}

SIMMAT_RET_VALUES SimMat::Runtime::qrSolve(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	std::shared_ptr<GenericVar> arg = argsIn.get(0);
	if (arg->isArray())
	{
		if (!arg->isComplex())
		{
			if (arg->isDouble())
			{
				std::shared_ptr<Eigen::MatrixXd> A = arg->as<Eigen::MatrixXd>();
				std::shared_ptr<GenericVar> rhs = argsIn.get(1);
				std::shared_ptr<Eigen::MatrixXd> b = rhs->as<Eigen::MatrixXd>();
				int rows = A->rows();
				int cols = b->cols();
				std::shared_ptr<Eigen::MatrixXd> x = initMatrix<Eigen::MatrixXd>(A->cols(), cols);
				x->setZero();
				*(x.get()) = (*(A.get())).colPivHouseholderQr().solve(*(b.get()));
				argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(x)));
				return SIMMAT_RET_VALUES::OK;
			}
		}
	}

	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}

SIMMAT_RET_VALUES SimMat::Runtime::lsqr(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	std::shared_ptr<GenericVar> arg = argsIn.get(0);
	if (arg->isArray())
	{
		if (!arg->isComplex())
		{
			if (arg->isDouble())
			{
				std::shared_ptr<Eigen::MatrixXd> A = arg->as<Eigen::MatrixXd>();
				std::shared_ptr<GenericVar> rhs = argsIn.get(1);
				std::shared_ptr<Eigen::MatrixXd> b = rhs->as<Eigen::MatrixXd>();
				int rows = A->rows();
				int cols = b->cols();
				std::shared_ptr<Eigen::MatrixXd> x = initMatrix<Eigen::MatrixXd>(A->cols(), cols);
				x->setZero();
				*(x.get()) = (*(A.get())).bdcSvd(Eigen::ComputeThinU | Eigen::ComputeThinV).solve(*(b.get()));
				argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(x)));
				return SIMMAT_RET_VALUES::OK;
			}
		}
	}

	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}

SIMMAT_RET_VALUES SimMat::Runtime::lu(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
//https://eigen.tuxfamily.org/dox/classEigen_1_1FullPivLU.html
//https://eigen.tuxfamily.org/dox/classEigen_1_1PartialPivLU.html
	std::shared_ptr<GenericVar> arg = argsIn.get(0);
	if (arg->isArray())
	{
		if (!arg->isComplex())
		{
			if (arg->isDouble())
			{
				std::shared_ptr<Eigen::MatrixXd> inValue = arg->as<Eigen::MatrixXd>();

				if (argsOut.size() == 3)
				{
					int minDim = std::min(inValue.get()->rows(), inValue.get()->cols());
					std::shared_ptr<Eigen::MatrixXd> L = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), minDim); L->setIdentity();
					std::shared_ptr<Eigen::MatrixXd> U = initMatrix<Eigen::MatrixXd>(minDim, inValue.get()->cols()); U->setIdentity();
					std::shared_ptr<Eigen::MatrixXd> P = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());
					auto rr = (inValue.get())->partialPivLu();
					*(P.get()) = rr.permutationP();
					*(L.get()) = rr.matrixLU().triangularView<Eigen::StrictlyLower>();
					*(U.get()) = rr.matrixLU().triangularView<Eigen::Upper>();
					std::shared_ptr<Eigen::MatrixXd> I = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), minDim); I->setIdentity();
					*(L.get()) = *(L.get()) + *(I.get());
					argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(L)));
					argsOut.set(1, std::shared_ptr<GenericVar>(new GenericVar(U)));
					argsOut.set(2, std::shared_ptr<GenericVar>(new GenericVar(P)));
					return SIMMAT_RET_VALUES::OK;
				}

				if (argsOut.size() == 4)
				{
					int minDim = std::min(inValue.get()->rows(), inValue.get()->cols());
					std::shared_ptr<Eigen::MatrixXd> L = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), minDim); L->setIdentity();
					std::shared_ptr<Eigen::MatrixXd> U = initMatrix<Eigen::MatrixXd>(minDim, inValue.get()->cols()); U->setIdentity();
					std::shared_ptr<Eigen::MatrixXd> P = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());
					std::shared_ptr<Eigen::MatrixXd> Q = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());
					auto rr = (inValue.get())->fullPivLu();
					*(P.get()) = rr.permutationP();
					*(Q.get()) = rr.permutationQ();
					*(L.get()) = rr.matrixLU().triangularView<Eigen::StrictlyLower>();
					*(U.get()) = rr.matrixLU().triangularView<Eigen::Upper>();
					std::shared_ptr<Eigen::MatrixXd> I = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), minDim); I->setIdentity();
					*(L.get()) = *(L.get()) + *(I.get());
					argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(L)));
					argsOut.set(1, std::shared_ptr<GenericVar>(new GenericVar(U)));
					argsOut.set(2, std::shared_ptr<GenericVar>(new GenericVar(P)));
					argsOut.set(3, std::shared_ptr<GenericVar>(new GenericVar(Q)));
					return SIMMAT_RET_VALUES::OK;
				}
			}
		}
	}

	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}


//SIMMAT_RET_VALUES SimMat::Runtime::asinh(const GenericVarSet& argsIn, GenericVarSet& argsOut)
//{
//	std::shared_ptr<GenericVar> arg = argsIn.get(0);
//	if (arg->isArray())
//	{
//		if (!arg->isComplex())
//		{
//			if (arg->isDouble())
//			{
//				std::shared_ptr<Eigen::MatrixXd> inValue = arg->as<Eigen::MatrixXd>();
//				std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());
//				auto rr=(inValue.get())->array();
//				rr.
//				*(temp.get()) = (inValue.get())->array().a();
//				argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
//				return SIMMAT_RET_VALUES::OK;
//			}
//		}
//	}
//
//	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
//}
//
//SIMMAT_RET_VALUES SimMat::Runtime::acosh(const GenericVarSet& argsIn, GenericVarSet& argsOut)
//{
//	std::shared_ptr<GenericVar> arg = argsIn.get(0);
//	if (arg->isArray())
//	{
//		if (!arg->isComplex())
//		{
//			if (arg->isDouble())
//			{
//				std::shared_ptr<Eigen::MatrixXd> inValue = arg->as<Eigen::MatrixXd>();
//				std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());
//
//				*(temp.get()) = (inValue.get())->array().acosh();
//				argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
//				return SIMMAT_RET_VALUES::OK;
//			}
//		}
//	}
//
//	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
//}
//
//SIMMAT_RET_VALUES SimMat::Runtime::atan(const GenericVarSet& argsIn, GenericVarSet& argsOut)
//{
//	std::shared_ptr<GenericVar> arg = argsIn.get(0);
//	if (arg->isArray())
//	{
//		if (!arg->isComplex())
//		{
//			if (arg->isDouble())
//			{
//				std::shared_ptr<Eigen::MatrixXd> inValue = arg->as<Eigen::MatrixXd>();
//				std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(inValue.get()->rows(), inValue.get()->cols());
//
//				*(temp.get()) = (inValue.get())->array().atan();
//				argsOut.set(0, std::shared_ptr<GenericVar>(new GenericVar(temp)));
//				return SIMMAT_RET_VALUES::OK;
//			}
//		}
//	}
//
//	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
//}

SIMMAT_RET_VALUES SimMat::Runtime::sqrt(const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	if (argsIn.size() == 0)
		return SIMMAT_RET_VALUES::TOO_FEW_ARGSIN;

	std::shared_ptr<GenericVar> var = argsIn.get(0);
	
	if (var->isScalar())
	{
		if (!var->isComplex())
		{
			if (var->isDouble())
			{
				std::shared_ptr<double> val = var->as<double>();
				if (val >= 0)
				{
					double* output = new double[1];
					*output = std::sqrt(*(val.get()));
					argsOut.set(0, std::make_shared<GenericVar>(output));
					return SIMMAT_RET_VALUES::OK;
				}
				else
				{
					std::complex<double>* output = new std::complex<double>[1];
					*output = std::sqrt(std::complex<double>(*(val.get())));
					argsOut.set(0, std::make_shared<GenericVar>(output));
					return SIMMAT_RET_VALUES::OK;
				}
			}
			else if (var->isFloat())
			{
				std::shared_ptr<float> val = var->as<float>();
				if (*val.get() >= 0)
				{
					float* output = new float[1];
					*output = std::sqrt(*(val.get()));
					argsOut.set(0, std::make_shared<GenericVar>(output));
					return SIMMAT_RET_VALUES::OK;
				}
				else
				{
					std::complex<float>* output = new std::complex<float>[1];
					*output = std::sqrt(std::complex<float>(0,*(val.get())));
					argsOut.set(0, std::make_shared<GenericVar>(output));
					return SIMMAT_RET_VALUES::OK;
				}
			}
			else if (var->isInt())
			{
				std::shared_ptr<int> val = var->as<int>();
				if (*val.get() >= 0)
				{
					double* output = new double[1];
					*output = std::sqrt(*(val.get()));
					argsOut.set(0, std::make_shared<GenericVar>(output));
					return SIMMAT_RET_VALUES::OK;
				}
				else
				{
					std::complex<float>* output = new std::complex<float>[1];
					std::complex<float> temp(*(val.get()),0);
					*output = std::sqrt(temp);
					argsOut.set(0, std::make_shared<GenericVar>(output));
					return SIMMAT_RET_VALUES::OK;
				}
			}
		}
		else
		{
			if (var->isDouble())
			{
				std::shared_ptr<std::complex<double>> val = var->as<std::complex<double>>();
				{
					std::complex<double>* output = new std::complex<double>[1];
					*output = std::sqrt(*(val.get()));
					argsOut.set(0, std::make_shared<GenericVar>(output));
					return SIMMAT_RET_VALUES::OK;
				}
			}
			else
			{
				std::shared_ptr<std::complex<float>> val = var->as<std::complex<float>>();
				{
					std::complex<float>* output = new std::complex<float>[1];
					*output = std::sqrt(*(val.get()));
					argsOut.set(0, std::make_shared<GenericVar>(output));
					return SIMMAT_RET_VALUES::OK;
				}
			}
		}
	}
	return SIMMAT_RET_VALUES::WRONG_TYPE_ARGIN;
}

std::function<SIMMAT_RET_VALUES(const GenericVarSet&, GenericVarSet&)> SimMat::Runtime::getFunc(const std::string& name)
{
	if (auto f = basicFuncs::m_funcs.find(name); f != basicFuncs::m_funcs.end())
		return f->second;
	else
		return nullptr;

}

void openGnuplot()
{
	GnuPlot::connect("\"C:\\Program Files\\gnuplot\\bin\\gnuplot.exe\"");
	GnuPlot::addComand("set key fixed left top vertical Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid\n");
	GnuPlot::addComand("set samples 50, 50\n");
	GnuPlot::addComand("set title \"Simple Plots\"\n");
	GnuPlot::addComand("set title  font \", 20\" textcolor lt - 1 norotate\n");
	GnuPlot::addComand("set xrange[*:*] noreverse writeback\n");
	GnuPlot::addComand("set x2range[*:*] noreverse writeback\n");
	GnuPlot::addComand("set yrange[*:*] noreverse writeback\n");
	GnuPlot::addComand("set y2range[*:*] noreverse writeback\n");
	GnuPlot::addComand("set zrange[*:*] noreverse writeback\n");
	GnuPlot::addComand("set cbrange[*:*] noreverse writeback\n");
	GnuPlot::addComand("set rrange[*:*] noreverse writeback\n");
	GnuPlot::addComand("NO_ANIMATION = 1\n");
	GnuPlot::addComand("plot[-10:10] sin(x), atan(x), cos(atan(x))\n");
	GnuPlot::addComand("e\n");    // finally, e
	//FILE* pFile = nullptr;
	//if (!tmpfile_s(&pFile))
	//{

	//	fclose(pFile);
	//}

	//FILE* gp = _popen("\"C:\\Program Files\\gnuplot\\bin\\gnuplot.exe\" -persist", "w");
	//
	//fprintf(gp, "set key fixed left top vertical Right noreverse enhanced autotitle box lt black linewidth 1.000 dashtype solid\n");
	//fprintf(gp, "set samples 50, 50\n");
	//fprintf(gp, "set title \"Simple Plots\"\n");
	//fprintf(gp, "set title  font \", 20\" textcolor lt - 1 norotate\n");
	//fprintf(gp, "set xrange[*:*] noreverse writeback\n");
	//fprintf(gp, "set x2range[*:*] noreverse writeback\n");
	//fprintf(gp, "set yrange[*:*] noreverse writeback\n");
	//fprintf(gp, "set y2range[*:*] noreverse writeback\n");
	//fprintf(gp, "set zrange[*:*] noreverse writeback\n");
	//fprintf(gp, "set cbrange[*:*] noreverse writeback\n");
	//fprintf(gp, "set rrange[*:*] noreverse writeback\n");
	//fprintf(gp, "NO_ANIMATION = 1\n");
	//fprintf(gp, "plot[-10:10] sin(x), atan(x), cos(atan(x))\n");
	//fprintf(gp, "e\n");    // finally, e
	//fflush(gp);   // flush the pipe to update the plot
	//int a = 0;
}

SimMat::Runtime::SIMMAT_RET_VALUES SimMat::Runtime::callFunc(const std::string& name, const GenericVarSet& argsIn, GenericVarSet& argsOut)
{
	static bool first = true;
	//if (first)	openGnuplot();
	//first = false;
	if (auto f = getFunc(name); f)
	{
		if (argsOut.size() == 0)
			argsOut.add("ans", std::make_shared<GenericVar>());

		return f(argsIn, argsOut);
	}
	else
		return SimMat::Runtime::SIMMAT_RET_VALUES::FUNCTION_NOT_FOUND;
}


