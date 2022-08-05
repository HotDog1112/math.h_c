#include "s21_math.h"

long double s21_sin(double x) {
    long double result = 0;
    if (x != 0) {
        if (x < 0) {
            x = s21_fabs(x);
            result = s21_process_sin(x);
            result *= -1;
        } else {
            result = s21_process_sin(x);
        }
    } else if (x != x || x == S21_INF) {
        result = S21_NAN;
    } else {
        result = 0;
    }
    return result;
}

long double s21_process_sin(double x) {
    long double result = 0;
    x -= (long)(x / (S21_M_PI * 2)) * (S21_M_PI * 2);
    for (int i = 1; i < 70; i++) {
        result += s21_pow_for_int(-1, i + 1) * s21_pow_for_int(x, 2 * i - 1) /
        s21_factorial(2 * i - 1);
    }
    return result;
}
