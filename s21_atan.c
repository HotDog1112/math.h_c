#include "s21_math.h"

long double s21_atan_process(double x) {
    long double result = x;
    int i = 1;
    while (i < 50) {
        result += s21_pow_for_int(-1, i) * s21_pow_for_int(x, i * 2 + 1) / (i * 2 + 1);
        i++;
    }
    return result;
}

long double s21_atan(double x) {
    long double result = 0;
    int a = 1;
    if (x > 0) {
        a = 0;
    }
    x = fabs(x);
    if (x == 0) {
        result = x;
    }
    if (x - x != 0 && x > 0) {
        result = S21_M_PI_2;
    } else if (x != x) {
        result = S21_NAN;
    }
    if (x < 7.0 / 16) {
        result = s21_atan_process(x);
    } else if (7.0 / 16 < x && x < 11.0 / 16) {
        result = 0.463647609 + s21_atan_process((x - 0.5) / (1.0 + x / 2));
    } else if (11.0 / 16 < x && x < 19.0 / 16) {
        result = 0.78539816339 + s21_atan_process((x - 1) / (1.0 + x));
    } else if (19.0 / 16 < x && x < 39.0 / 16) {
        result = 0.98279372324 + s21_atan_process((x - 1.5) / (1.0 + 3 * x / 2));
    } else if (39.0 / 16 < x && x < S21_INF) {
        result = S21_M_PI_2 + s21_atan_process((-1) * 1 / x);
    }
    if ((a && result != 0) || (a && -S21_ISINF(x))) {
        result *= (-1);
    }
    return result;
}
