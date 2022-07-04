#include "SimMat_Exceptions.h"

using namespace SimMat::Runtime;

WrongParameter::WrongParameter(const char* what) : exception(what) {}