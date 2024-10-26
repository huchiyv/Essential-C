#include "MathFunctions.h"
#include <cmath>
#ifdef USE_MYMATH
#include "mysqrt.h"
#endif

double mySqrt1(double x){
#ifdef USE_MYMATH
    return mySqrt2(x);
#else
  std::cout << "MathFunctions called" << std::endl;
  return std::sqrt(x);
#endif
}

