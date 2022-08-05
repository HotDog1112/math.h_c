#include "s21_math.h"

long double s21_pow(double base, double exp) {
    long double result = 0.0;
    if ((exp == 0 || base == 1) || (base == -1 && (exp == S21_INF || exp == -S21_INF))
    || ((exp != exp && base == 1))) {
        result = 1;
    } else if (base == 0) {
        if (exp < 0) {
            result = S21_INF;
        } else if (exp != exp) {
            result = S21_NAN;
        } else {
            result = 0;
        }
    } else if (base != base) {
        result = base;
    } else if (base == S21_INF && exp > 0) {
        result = S21_INF;
    } else if (base - base != 0) {
        if (exp < 0) {
            result = 0;
        } else {
            result = S21_INF;
        }
    } else if (base < 0) {
        if (exp != s21_floor(exp)) {
            result = -S21_NAN;
        } else if (s21_fabs(s21_fmod(exp, 2)) == 1) {
            base *= (-1);
            result = (-1) * s21_exp(exp * s21_log(base));
        } else {
            base *= (-1);
            result = s21_exp(exp * s21_log(base));
        }
    } else {
        result = s21_exp(exp * s21_log(base));
    }
    return result;
}
