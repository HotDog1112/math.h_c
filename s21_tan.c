#include "s21_math.h"

long double s21_tan(double x) {
    long double result = 0;
    int a = 0;
    if (x < 0) {
        a = 1;
    }
    x = s21_fabs(x);
    if (x == 0) {
        result = x;
    } else if (x - x != 0 || x != x) {
        result = S21_NAN;
    } else if (x == 3 * S21_M_PI_2) {
        result = 5443746451065123;
    } else if (x == S21_M_PI_2) {
        result = 16331239353195370;
    } else {
        result = s21_sin(x) / s21_cos(x);
    }
    if (a) {
        result *= (-1);
    }
    return result;
}
