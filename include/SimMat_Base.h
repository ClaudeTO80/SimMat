#pragma once
#include <memory>
#include "GenericVarSet.h"
#include "Eigen\Dense"

void test();
namespace SimMat
{
	namespace Runtime
	{
		enum class VarType
		{
			SINGLE=1,
			DOUBLE=2,
			INT=4,
			REAL=8,
			COMPLEX=16,
		};

		class SimMatEngine
		{

		public:
			static std::shared_ptr<SimMatEngine> start();
			static std::shared_ptr<SimMatEngine> getInstance();
			static GenericVarSet& commonPool();
		private:

			SimMatEngine() = default;

			// Delete copy/move so extra instances can't be created/moved.
			SimMatEngine(const SimMatEngine&) = delete;
			SimMatEngine& operator=(const SimMatEngine&) = delete;
			SimMatEngine(SimMatEngine&&) = delete;
			SimMatEngine& operator=(SimMatEngine&&) = delete;

			static std::shared_ptr<SimMatEngine> m_instance;
			static GenericVarSet m_commonPool;
		};

		enum class SIMMAT_RET_VALUES
		{
			FIRST = 0,
			OK = FIRST,
			TOO_MUCH_ARGSIN = 1,
			TOO_FEW_ARGSIN = 2,
			TOO_MUCH_ARGSOUT = 3,
			TOO_FEW_ARGSOUT = 4,
			WRONG_TYPE_ARGIN = 5,
			FUNCTION_NOT_FOUND = 6,
		};


		template<typename T>
		std::shared_ptr<T> initMatrix(int dim1, int dim2)
		{
			T* temp(NULL);
			temp = new T(dim1, dim2);
			return std::shared_ptr<T>(temp);
		}

		template<typename T>
		std::shared_ptr<T> initMatrix(int dim1, int dim2,Eigen::StorageOptions storageOrder)
		{
			T* temp(NULL);
			temp = new T<storageOrder>(dim1, dim2);
			return std::shared_ptr<T>(temp);
		}

		template<typename T>
		T* initMatrix(const GenericVarSet& args)
		{
			if (args.size() == 0)
				return nullptr;

			std::shared_ptr<GenericVar> var = args.get(0);
			int dim1 = 0;
			int dim2 = 0;

			if (var->isScalar())
			{
				if (!var->isComplex())
				{
					if (var->isDouble())	dim1 = (int)(*(var->as<double>().get()));
					if (var->isFloat())		dim1 = (int)(*(var->as<float>().get()));
					if (var->isInt())		dim1 = (int)(*(var->as<int>().get()));
				}
			}
			if (args.size() == 1)
				dim2 = dim1;

			else
			{
				if (var = args.get(1); var->isScalar() && !var->isComplex())
					dim2 = *(var->as<int>().get());
			}

			if (dim1<0)
			{
				std::string msg("");
				msg
					.append("Function ")
					.append(__FUNCTION__)
					.append(": first parameter is negative.");
				throw WrongParameter(msg.c_str());
				return nullptr;
			}
			if (dim2<0)
			{
				std::string msg("");
				msg
					.append("Function ")
					.append(__FUNCTION__)
					.append(": second parameter is negative.");
					throw WrongParameter(msg.c_str());
				return nullptr;
			}
			return new T(dim1, dim2);
		}


		std::function<SIMMAT_RET_VALUES(const GenericVarSet&, GenericVarSet&)> getFunc(const std::string& name);
		SIMMAT_RET_VALUES callFunc(const std::string& name, const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES zeros(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES ones(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES eye(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES linspace(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES sin(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES cos(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES tan(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES asin(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES acos(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES atan(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES sinh(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES cosh(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES tanh(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		//SIMMAT_RET_VALUES asinh(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		//SIMMAT_RET_VALUES acosh(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		//SIMMAT_RET_VALUES atanh(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES linsolve(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES rand(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES inv(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES save(const GenericVarSet& argsIn, std::ostream& os);
		SIMMAT_RET_VALUES load(GenericVarSet& argsOut, std::istream& is);
		SIMMAT_RET_VALUES qr(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES lu(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES luSolve(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES qrSolve(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES lsqr(const GenericVarSet& argsIn, GenericVarSet& argsOut);
		SIMMAT_RET_VALUES sqrt(const GenericVarSet& argsIn, GenericVarSet& argsOut);

		class basicFuncs
		{
		public:
			friend std::function<SIMMAT_RET_VALUES(const GenericVarSet&, GenericVarSet&)> getFunc(const std::string& name);
			static void popoluteFuncs()
			{
				m_funcs.insert(std::make_pair("zeros", SimMat::Runtime::zeros));
				m_funcs.insert(std::make_pair("eye", SimMat::Runtime::eye));
				m_funcs.insert(std::make_pair("ones", SimMat::Runtime::ones));
				m_funcs.insert(std::make_pair("linspace", SimMat::Runtime::linspace));
				m_funcs.insert(std::make_pair("sqrt", SimMat::Runtime::sqrt));
				m_funcs.insert(std::make_pair("sin", SimMat::Runtime::sin));
				m_funcs.insert(std::make_pair("cos", SimMat::Runtime::cos));
				m_funcs.insert(std::make_pair("tan", SimMat::Runtime::tan));
				m_funcs.insert(std::make_pair("asin", SimMat::Runtime::asin));
				m_funcs.insert(std::make_pair("acos", SimMat::Runtime::acos));
				m_funcs.insert(std::make_pair("atan", SimMat::Runtime::atan));
				m_funcs.insert(std::make_pair("sinh", SimMat::Runtime::sinh));
				m_funcs.insert(std::make_pair("cosh", SimMat::Runtime::cosh));
				m_funcs.insert(std::make_pair("tanh", SimMat::Runtime::tanh));
				m_funcs.insert(std::make_pair("qr", SimMat::Runtime::qr));
				m_funcs.insert(std::make_pair("lu", SimMat::Runtime::lu));
				m_funcs.insert(std::make_pair("inv", SimMat::Runtime::inv));
				m_funcs.insert(std::make_pair("rand", SimMat::Runtime::rand));
				m_funcs.insert(std::make_pair("linsolve", SimMat::Runtime::linsolve));
			}
		private:
			static std::map<std::string, std::function<SIMMAT_RET_VALUES(const GenericVarSet&, GenericVarSet&)>> m_funcs;
		};

		
	}

}