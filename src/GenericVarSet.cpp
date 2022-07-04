#include "GenericVarSet.h"

using namespace SimMat::Runtime;

void GenericVarSet::add(const std::string& name, std::shared_ptr<GenericVar> mat)
{
	clear(name);

	m_vars.insert(std::make_pair(name, mat));
	m_vector.push_back(mat);
	m_names.push_back(name);
}

std::shared_ptr<GenericVar> GenericVarSet::get(const std::string& name)
{
	if (auto temp = m_vars.find(name); temp != m_vars.end())
		return temp->second;

	else
		return std::shared_ptr<GenericVar>(nullptr);
}

std::map<std::string, std::shared_ptr<GenericVar>>::iterator GenericVarSet::get(int ind)
{
	return  m_vars.find(m_names[ind]);
}

std::shared_ptr<GenericVar> GenericVarSet::get(int ind) const
{
	return m_vector[ind];
}

void GenericVarSet::clear()
{
	m_vars.clear();
}

void GenericVarSet::clear(const std::string& name)
{
	if (auto tempMat = m_vars.find(name); tempMat != m_vars.end())
	{
		m_vars.erase(tempMat);
	}
}

bool GenericVarSet::has(const std::string& name)
{
	return m_vars.find(name) != m_vars.end();
}

size_t GenericVarSet::size()
{
	return m_vars.size();
}

size_t GenericVarSet::size() const
{
	return m_vars.size();
}

void GenericVarSet::set(int id, std::shared_ptr<GenericVar> var)
{
	m_vector[id] = var;
	m_vars[m_names[id]] = var;
}

void GenericVarSet::append(std::shared_ptr<GenericVarSet> other)
{
	for (size_t i = 0; i < other->size(); ++i)
	{
		auto curr = other->get(i);
		std::string varName = curr->first;
		std::shared_ptr<GenericVar> var = curr->second;
		add(varName, var);
	}
}

void GenericVarSet::append(std::shared_ptr<GenericVar> other)
{
	//for (int i = 0; i < other->size(); ++i)
	//{
	//	std::string varName = other->m_names[i];
	//	std::shared_ptr<GenericVar> var = other->get(i)->second;
	//	add(varName, var);
	//}
}

std::map<std::string, std::shared_ptr<GenericVar>>::const_iterator GenericVarSet::begin() const
{
	return m_vars.begin();
}

std::map<std::string, std::shared_ptr<GenericVar>>::const_iterator GenericVarSet::end() const
{
	return m_vars.end();
}
