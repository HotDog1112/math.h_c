#include "s21_math.h"

long double s21_log(double x) {
    long double result = 0.0;
      int a = 0;
      if (x != x || x < 0) {
        result = S21_NAN;
      } else if (x == S21_INF) {
        result = x;
      } else if (x == 1) {
        result = 0;
      } else if (x == 0) {
        result = -S21_INF;
    } else {
        while (x >= S21_EXP) {
            x /= S21_EXP;
            a++;
        }
        int i = 0;
        while (i < 70) {
            result += 2 * (x - s21_exp(result)) / (x + s21_exp(result));
            i++;
        }
        result += a;
    }
    return result;
}
