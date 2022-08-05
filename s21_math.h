#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdint.h>
#include <float.h>
#include <math.h>


#define S21_M_PI 3.14159265358979323846
#define S21_M_PI_2 1.57079632679489661923

#define S21_EXP 2.71828182845904523536028747135266

#define S21_EPS 1e-10

#define S21_NAN 0.0 / 0.0
#define S21_INF 1.0 / 0.0

#define S21_ISNAN(x) (!(x >= 0) && !(x < 0))
#define S21_ISINF(x) ((x == S21_INF) || (x == -S21_INF))

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_atan_process(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_process_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_pow_for_int(long double base, unsigned int exp);
long double s21_factorial(int x);
long double s21_sin(double x);
long double s21_process_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

#endif  // SRC_S21_MATH_H_
