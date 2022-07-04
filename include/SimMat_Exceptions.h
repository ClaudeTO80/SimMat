#pragma once
#include <stdexcept>

namespace SimMat
{
	namespace Runtime
	{
		class WrongParameter : public std::exception
		{
		public:
			WrongParameter(const char* what);
		};
	}
}
