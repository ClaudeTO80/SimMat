#pragma once
#include <string>
#include <vector>
#include <map>
#include "SimMat_Exceptions.h"
#include "GenericVar.h"

namespace SimMat
{
	namespace Runtime
	{
		class GenericVarSet
		{
		public:
			void add(const std::string& name, std::shared_ptr<GenericVar> mat);
			std::shared_ptr<GenericVar> get(const std::string& name);
			std::map<std::string, std::shared_ptr<GenericVar>>::iterator get(int ind);
			std::shared_ptr<GenericVar> get(int ind) const;
			void clear();
			void clear(const std::string& name);
			bool has(const std::string& name);
			size_t size();
			size_t size() const;
			void set(int id, std::shared_ptr<GenericVar> var);
			void append(std::shared_ptr<GenericVarSet> other);
			void append(std::shared_ptr<GenericVar> other);
			std::map<std::string, std::shared_ptr<GenericVar>>::const_iterator begin() const;
			std::map<std::string, std::shared_ptr<GenericVar>>::const_iterator end() const;
		private:
			std::map<std::string, std::shared_ptr<GenericVar>> m_vars;
			std::vector<std::shared_ptr<GenericVar>> m_vector;
			std::vector<std::string> m_names;
		};
	}
}