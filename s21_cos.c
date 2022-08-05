#include "s21_math.h"

long double s21_cos(double x) {
    long double result = 1;
    int minus = 0;
    if (x > 0) {
        minus = 0;
    } else {
        minus = 1;
    }
    if (x == 0) {
        result = 1;
    } else if (x == S21_INF || x == -S21_INF || x != x) {
        result = S21_NAN;
    } else {
        x = s21_fabs(x);
        x -= (long)(x / (2 * S21_M_PI)) * (2 * S21_M_PI);
        if (minus) {
            x *= (-1);
        }
        int i = 1;
        while (i < 70) {
            result += s21_pow_for_int(-1, i) * s21_pow_for_int(x, i * 2) / s21_factorial(i * 2);
            i++;
        }
    }
    return result;
}
