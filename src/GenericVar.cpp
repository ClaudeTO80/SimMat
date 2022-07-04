#include "GenericVar.h"

	SimMat::Runtime::GenericVar::GenericVar(){}

	SimMat::Runtime::GenericVar::GenericVar(GenericVar* other) :
		m_value(other->getRaw()),
		m_isScalar(other->m_isScalar),
		m_isArray(other->m_isArray),
		m_isTensor(other->m_isTensor),
		m_isComplex(other->m_isComplex),
		m_isInt(other->m_isInt),
		m_isFloat(other->m_isFloat),
		m_isDouble(other->m_isDouble)
	{}



	std::any SimMat::Runtime::GenericVar::getRaw()
	{
		return m_value;
	}

	bool SimMat::Runtime::GenericVar::isInt()
	{
		return m_isInt;
	}

	bool SimMat::Runtime::GenericVar::isFloat()
	{
		return m_isFloat;
	}

	bool SimMat::Runtime::GenericVar::isDouble()
	{
		return m_isDouble;
	}

	bool SimMat::Runtime::GenericVar::isComplex()
	{
		return m_isComplex;
	}

	bool SimMat::Runtime::GenericVar::isScalar()
	{
		return m_isScalar;
	}

	bool SimMat::Runtime::GenericVar::isArray()
	{
		return m_isArray;
	}

