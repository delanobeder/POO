#ifndef DIV_ZERO_EXCEPTION_H
#define DIV_ZERO_EXCEPTION_H

#include <iostream>
using namespace std;

class DivZeroException : public runtime_error{
public:
      DivZeroException(const char *arquivo, int linha);
};

#endif /* DIV_ZERO_EXCEPTION_H */