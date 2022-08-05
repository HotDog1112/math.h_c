#include "s21_math.h"

long double s21_factorial(int x) {
    long double result = 1;
    int i = 2;
    while (i <= x) {
        result *= i;
        i++;
    }
    return result;
}
