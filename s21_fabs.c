#include "s21_math.h"
#include <math.h>

long double s21_fabs(double x) {
    x = (long double)x;
    if (x != x) {
        x = S21_NAN;
    } else if (x == S21_INF || x == -S21_INF) {
        x = S21_INF;
    }
    if (x < 0) {
        x *= (-1);
    }
    return x;
}
