#include "DivZeroException.h"

DivZeroException::DivZeroException(const char* s, int n) : 
      runtime_error("DivZeroException lançada em " + string(s) + " (linha:" + to_string(n) + ")") {
}