#include "s21_math.h"

long double s21_pow_for_int(long double base, unsigned int exp) {
    long double result = base;
    unsigned i = 1;
    while (i < exp) {
        result *= base;
        i++;
    }
    return result;
}
