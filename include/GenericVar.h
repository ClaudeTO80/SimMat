#pragma once

#include <memory>
#include <any>
#include <iostream>
#include "Eigen\Dense"

namespace SimMat
{
	namespace Runtime
	{
		class GenericVar
		{
		public:

			GenericVar();
			GenericVar(GenericVar* other);

			template<typename T>
			GenericVar(T* ptr)
			{
				m_value = std::shared_ptr<T>(ptr);
				if constexpr (std::is_same_v<Eigen::MatrixXd, T>) {
					m_isArray = true;
					m_isDouble = true;
				}
				else if constexpr (std::is_same_v<Eigen::MatrixXf, T>) {
					m_isArray = true;
					m_isFloat = true;;
				}
				else if constexpr (std::is_same_v<Eigen::MatrixXcd, T>) {
					m_isArray = true;
					m_isDouble = true;
					m_isComplex = true;
				}
				else if constexpr (std::is_same_v<Eigen::MatrixXcf, T>) {
					m_isArray = true;
					m_isFloat = true;
					m_isComplex = true;
				}
				if constexpr (std::is_same_v<int, T>) {
					m_isScalar = true;
					m_isInt = true;
				}
				if constexpr (std::is_same_v<float, T>) {
					m_isScalar = true;
					m_isFloat = true;
				}
				if constexpr (std::is_same_v<double, T>) {
					m_isScalar = true;
					m_isDouble = true;
				}
				if constexpr (std::is_same_v<std::complex<double>, T>) {
					m_isScalar = true;
					m_isDouble = true;
					m_isComplex = true;
				}
				if constexpr (std::is_same_v<std::complex<float>, T>) {
					m_isScalar = true;
					m_isFloat = true;
					m_isComplex = true;
				}
				if constexpr (std::is_same_v<std::complex<int>, T>) {
					m_isScalar = true;
					m_isInt = true;
					m_isComplex = true;
				}
			}

			template<typename T>
			GenericVar(T ptr)
			{
				T* temp;
				*temp = ptr;
				GenericVar(temp);
			}

			template<typename T>
			GenericVar(std::shared_ptr<T> ptr)
			{
				m_value = std::shared_ptr<T>(ptr);
				if constexpr (std::is_same_v<Eigen::MatrixXd, T>) {
					m_isArray = true;
					m_isDouble = true;
				}
				else if constexpr (std::is_same_v<Eigen::MatrixXf, T>) {
					m_isArray = true;
					m_isFloat = true;;
				}
				else if constexpr (std::is_same_v<Eigen::MatrixXcd, T>) {
					m_isArray = true;
					m_isDouble = true;
					m_isComplex = true;
				}
				else if constexpr (std::is_same_v<Eigen::MatrixXcf, T>) {
					m_isArray = true;
					m_isFloat = true;
					m_isComplex = true;
				}
				if constexpr (std::is_same_v<int, T>) {
					m_isScalar = true;
					m_isInt = true;
				}
				if constexpr (std::is_same_v<float, T>) {
					m_isScalar = true;
					m_isFloat = true;
				}
			}

			template<typename T>
			std::shared_ptr<T> as()
			{
				try {
					return  std::any_cast<std::shared_ptr<T>>(m_value);
				}
				catch (const std::bad_any_cast& e)
				{
					std::cout << e.what() << std::endl;
					std::cout << typeid(T).name() << std::endl;
					std::cout << m_value.type().name() << std::endl;
					return nullptr;
				}
			}

			std::any getRaw();
			bool isInt();
			bool isFloat();
			bool isDouble();
			bool isComplex();
			bool isScalar();
			bool isArray();

		private:
			std::any m_value;
			bool m_isScalar{ false };
			bool m_isArray{ false };
			bool m_isTensor{ false };
			bool m_isComplex{ false };
			bool m_isInt{ false };
			bool m_isFloat{ false };
			bool m_isDouble{ false };
		};
	}
}