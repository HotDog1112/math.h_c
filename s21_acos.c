#include "s21_math.h"

long double s21_acos(double x) {
    long double result = 0;
    if (x == 1) {
        result = 0;
    } else if (s21_fabs(x) > 1 || x != x) {     // исключения
        result = S21_NAN;
    } else if (x == 0) {                        // обычные значения, которые не нужно вычислять отдельно
        result = S21_M_PI_2;
    } else if (x == -1) {
        result = S21_M_PI;
    } else if (x == 0.707106781186547) {
        result = S21_M_PI_2 / 2;
    } else if (x == -0.707106781186547) {
        result = 3 * S21_M_PI / 4;
    } else if (x > -1 && x < 1) {
        if (x > 0) {
            result = s21_atan(s21_sqrt(1 - s21_pow(x, 2)) / x);
        } else {
            result = S21_M_PI + s21_atan(s21_sqrt(1 - s21_pow(x, 2)) / x);
        }
    }
    return result;
}
