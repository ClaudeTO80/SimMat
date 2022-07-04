#include <stdio.h>
#include <stdlib.h>
#include <filesystem>
#include <iostream>
//#include <fostream>
#include <map>
#include <any>
#include <string>
#include <queue>
#include <type_traits>
#include "MATLABBaseVisitor.h"
#include "MATLABLexer.h"
#include "antlr4-runtime.h"
#include "Eigen\Dense"
#include <math.h>
#include <omp.h>
#include "GenericVarSet.h"
#include "SimMat_Base.h"
#include "SimMat_Parser.h"
#include "GnuPlot.h"

using namespace SimMat::Runtime;


GenericVarSet pool;
std::queue<std::shared_ptr<GenericVarSet>> argsOutQueue;


template<typename T>
std::shared_ptr<T> add(	const std::shared_ptr<T>& m1,
						const std::shared_ptr<T>& m2)
{
	std::shared_ptr<T> temp = initMatrix<T>(m1->rows(),m1->cols());
	*(temp.get()) =*(m1.get()) + *(m2.get());
	return temp;
}

template<typename T, typename U,
	std::enable_if_t<
	(	std::is_same_v<Eigen::MatrixXd, T>
	||	std::is_same_v<Eigen::MatrixXf, T>
	||	std::is_same_v<Eigen::MatrixXi, T>)
	>>
std::shared_ptr<Eigen::MatrixXcd> add(	std::shared_ptr<T> m1,
										std::shared_ptr<Eigen::MatrixXcd> m2)
{
	std::shared_ptr<Eigen::MatrixXcd> temp = initMatrix<Eigen::MatrixXcd>(m1->rows(), m1->cols());
	*(temp.get()) = m1.get()->cast<std::complex<double>>() + *(m2.get());
	return temp;
}


//std::shared_ptr<Eigen::MatrixXcd> add(	std::shared_ptr<Eigen::MatrixXd> m1,
//										std::shared_ptr<Eigen::MatrixXcd> m2)
//{
//	std::shared_ptr<Eigen::MatrixXcd> temp = initMatrix<Eigen::MatrixXcd>(m1->rows(), m1->cols());
//	*(temp.get()) = m1.get()->cast<std::complex<double>>() + *(m2.get());
//	return temp;
//}

std::shared_ptr<Eigen::MatrixXcd> add(	const std::shared_ptr<Eigen::MatrixXf>& m1,
										const std::shared_ptr<Eigen::MatrixXcd>& m2)
{
	std::shared_ptr<Eigen::MatrixXcd> temp = initMatrix<Eigen::MatrixXcd>(m1->rows(), m1->cols());
	*(temp.get()) = m1.get()->cast<std::complex<double>>() + *(m2.get());
	return temp;
}

std::shared_ptr<Eigen::MatrixXcd> add(	const std::shared_ptr<Eigen::MatrixXd>& m1,
										const std::shared_ptr<Eigen::MatrixXcf>& m2)
{
	std::shared_ptr<Eigen::MatrixXcd> temp = initMatrix<Eigen::MatrixXcd>(m1->rows(), m1->cols());
	*(temp.get()) = m1.get()->cast<std::complex<double>>() + m2.get()->cast<std::complex<double>>();
	return temp;
}

std::shared_ptr<Eigen::MatrixXcf> add(	const std::shared_ptr<Eigen::MatrixXf>& m1,
										const std::shared_ptr<Eigen::MatrixXcf>& m2)
{
	std::shared_ptr<Eigen::MatrixXcf> temp = initMatrix<Eigen::MatrixXcf>(m1->rows(), m1->cols());
	*(temp.get()) = m1.get()->cast<std::complex<float>>() + *(m2.get());
	return temp;
}

//std::shared_ptr<Eigen::MatrixXcd> add(	const std::shared_ptr<Eigen::MatrixXcd>& m1,
//										const std::shared_ptr<Eigen::MatrixXd>& m2)
//{
//	return add(m2, m1);
//}

std::shared_ptr<Eigen::MatrixXcd> add(	const std::shared_ptr<Eigen::MatrixXcd> m1,
										const std::shared_ptr<Eigen::MatrixXf> m2)
{
	return add(m2, m1);
}

std::shared_ptr<Eigen::MatrixXcd> add(	const std::shared_ptr<Eigen::MatrixXcf> m1,
										const std::shared_ptr<Eigen::MatrixXd> m2)
{
	return add(m2, m1);
}

std::shared_ptr<Eigen::MatrixXcf> add(	const std::shared_ptr<Eigen::MatrixXcf> m1,
										const std::shared_ptr<Eigen::MatrixXf> m2)
{
	return add(m2, m1);
}

template<	typename T, typename U, 
				std::enable_if_t<
								(	std::is_same_v<Eigen::MatrixXd,T>
								&&	std::is_same_v<Eigen::MatrixXf, U>)
							||	(	std::is_same_v<Eigen::MatrixXf,T>
								&&	std::is_same_v<Eigen::MatrixXd, U>)
							>>
std::shared_ptr<Eigen::MatrixXd> add(	const std::shared_ptr<T>& m1,
										const std::shared_ptr<U>& m2)
{
	std::shared_ptr<Eigen::MatrixXd> temp = initMatrix<Eigen::MatrixXd>(m1->rows(), m1->cols());
	*(temp.get()) = m1.get()->cast<double>() + m2.get()->cast<double>();
	return temp;
}

int main(int argc, char* argv[])
{
	Eigen::setNbThreads(6);
	//test();
	std::shared_ptr<SimMatEngine> engine=SimMatEngine::start();
	SimMat_Parser::parseFile(argv[1]);
	std::fstream ofs(R"(c:\tmp\save.txt)", std::ios::ios_base::out | std::ios::ios_base::binary);
	save(SimMat_Parser::m_pool, ofs);
	ofs.close();

	std::fstream ifs(R"(c:\tmp\save.txt)", std::ios::ios_base::in | std::ios::ios_base::binary);
	load(SimMat_Parser::m_pool, ifs);
	ifs.close();
	pool.clear();
	GnuPlot::close();
	return 0;
}

