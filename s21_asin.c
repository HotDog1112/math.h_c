#include "s21_math.h"

long double s21_asin(double x) {
    long double result = 0;
    int a = 0;
    if (x < 0) {
        a = 1;
    }
    x = fabs(x);
    if (x - x != 0 || x > 1) {
        result = S21_NAN;
    } else if (x == 0) {
        result = x;
    } else if (x < 0.5) {
        int i = 0;
        while (i < 30) {
            result += s21_factorial(i * 2) * s21_pow(x, i * 2 + 1) /
            s21_pow(4, i) / s21_pow(s21_factorial(i), 2) / (i * 2 + 1);
            i++;
        }
    } else {
        result = S21_M_PI_2 - s21_acos(x);
    }
    if (a) {
        result *= (-1);
    }
    return result;
}
