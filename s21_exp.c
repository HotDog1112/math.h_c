#include "s21_math.h"

long double s21_exp(double x) {
    long double result = 0;
    int a = 0;
    if (x < 0) {
        a = 1;
    }
    if (x == 0) {
        result = 1;
    } else if (a && x == -S21_INF) {
        result = 0;
    } else if (x == DBL_MAX) {
        result = S21_INF;
    } else if (x > 0 && x == S21_INF) {
        result = x;
    } else if (x != x) {
        result = x;
    } else {
        if (x < 0) {
            result = 1 / s21_process_exp(x);
        } else {
            result = s21_process_exp(x);
        }
        if (result > DBL_MAX) {
            result = S21_INF;
        }
    }
    return result;
}

long double s21_process_exp(double x) {
    long double result = 1.0;
    x = s21_fabs(x);
    int i = 1;
    while (i < 100) {
      result += s21_pow_for_int(x, i) / s21_factorial(i);
      i++;
    }
    return result;
}
