#include "s21_math.h"

long double s21_fmod(double x, double y) {
    long double result;
    if (y == 0 || y != y || x - x != 0 || x != x) {
        result = S21_NAN;
    } else if (y - y != 0) {
        result = x;
    } else {
        long a = 0.0;
        a = x / y;
        result = x - a * y;
    }
    return result;
}
