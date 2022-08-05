#include "s21_math.h"

long double s21_ceil(double x) {
  if (x - x != 0 || x == DBL_MAX) {
  } else if (x > 0) {
    x = (long long int)x + 1;
  } else {
    x = (long long int)x;
  }
  return x;
}

