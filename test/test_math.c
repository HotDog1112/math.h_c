#include <check.h>

#include "../s21_math.h"


START_TEST(abs_test_1) { ck_assert_int_eq(s21_abs(30), abs(30)); }
END_TEST

START_TEST(abs_test_2) { ck_assert_int_eq(s21_abs(-6), abs(-6)); }
END_TEST

START_TEST(abs_test_3) { ck_assert_int_eq(s21_abs(-2147483647), abs(-2147483647)); }
END_TEST

START_TEST(abs_test_4) { ck_assert_int_eq(s21_abs(2147483647), abs(2147483647)); }
END_TEST

START_TEST(abs_test_5) { ck_assert_int_eq(s21_abs(-0), abs(-0)); }
END_TEST

START_TEST(abs_test_6) { ck_assert_int_eq(s21_abs((int)NAN), abs((int)NAN)); }
END_TEST

START_TEST(abs_test_7) { ck_assert_int_eq(s21_abs(+0), abs(+0)); }
END_TEST

START_TEST(abs_test_8) {
  ck_assert_int_eq(s21_abs((int)INFINITY), abs((int)INFINITY));
}
END_TEST

START_TEST(abs_test_9) {
  ck_assert_int_eq(s21_abs((int)-INFINITY), abs((int)-INFINITY));
}
END_TEST

START_TEST(abs_test_10) { ck_assert_int_eq(s21_abs(0), abs(0)); }
END_TEST

START_TEST(acos_test_1) {
  double num = 0.49;
  long double orig_res = acos(num), our_res = s21_acos(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
} END_TEST


START_TEST(acos_test_2) {
  double num = -0.88;
  long double orig_res = acos(num), our_res = s21_acos(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
} END_TEST

START_TEST(acos_test_3) {
  double num = -7;
  long double orig_res = acos(num), our_res = s21_acos(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
} END_TEST

START_TEST(acos_test_4) {
  double num = INFINITY;
  long double orig_res = acos(num), our_res = s21_acos(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
} END_TEST

START_TEST(acos_test_5) {
  double num = -INFINITY;
  long double orig_res = acos(num), our_res = s21_acos(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
} END_TEST

START_TEST(acos_test_6) {
  double num = NAN;
  long double orig_res = s21_acos(num), our_res = acos(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
} END_TEST

START_TEST(acos_test_7) {
    ck_assert_ldouble_nan(s21_acos(NAN));
    ck_assert_ldouble_nan(acos(NAN));
} END_TEST

START_TEST(acos_test_8) {
    ck_assert_ldouble_nan(s21_acos(NAN));
    ck_assert_ldouble_nan(acos(NAN));
} END_TEST

START_TEST(acos_test_9) {
    ck_assert_ldouble_eq_tol(s21_acos(1.0), acos(1.0), S21_EPS);
    ck_assert_ldouble_eq_tol(s21_acos(-1.0), acos(-1.0), S21_EPS);
} END_TEST

START_TEST(acos_test_10) {
    ck_assert_ldouble_eq_tol(s21_acos(0.0), acos(0.0), S21_EPS);
    ck_assert_ldouble_eq_tol(s21_acos(-0.0), acos(-0.0), S21_EPS);
} END_TEST

START_TEST(acos_test_11) {
    ck_assert_ldouble_eq_tol(s21_acos(-1), acos(-1), S21_EPS);
} END_TEST

START_TEST(acos_test_12) {
    ck_assert_ldouble_eq_tol(s21_acos(1), acos(1), S21_EPS);
} END_TEST

START_TEST(acos_test_13) {
    ck_assert_ldouble_eq_tol(s21_acos(-sqrt(3) / 2), acos(-sqrt(3) / 2), S21_EPS);
} END_TEST

START_TEST(acos_test_14) {
    ck_assert_ldouble_eq_tol(s21_acos(-sqrt(2) / 2), acos(-sqrt(2) / 2), S21_EPS);
} END_TEST

START_TEST(acos_test_15) {
    ck_assert_ldouble_eq_tol(s21_acos(-1 / 2), acos(-1 / 2), S21_EPS);
} END_TEST

START_TEST(acos_test_16) {
    ck_assert_ldouble_eq_tol(s21_acos(1 / 2), acos(1 / 2), S21_EPS);
} END_TEST

START_TEST(acos_test_17) {
    ck_assert_ldouble_eq_tol(s21_acos(2 / 2), acos(2 / 2), S21_EPS);
} END_TEST

START_TEST(acos_test_18) {
    ck_assert_ldouble_eq_tol(s21_acos(sqrt(2) / 2), acos(sqrt(2) / 2), S21_EPS);
} END_TEST

START_TEST(acos_test_19) {
    ck_assert_ldouble_eq_tol(s21_acos(sqrt(3) / 2), acos(sqrt(3) / 2), S21_EPS);
} END_TEST

START_TEST(acos_test_20) {
  double num = 0.707106781186547;
  long double orig_res = acos(num), our_res = s21_acos(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
} END_TEST

START_TEST(acos_test_21) {
  double num = -0.707106781186547;
  long double orig_res = acos(num), our_res = s21_acos(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
} END_TEST

START_TEST(asin_test_1) {
  double num = 0.65;
  long double orig_res = asin(num), our_res = s21_asin(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(asin_test_2) {
  double num = -0.99;
  long double orig_res = asin(num), our_res = s21_asin(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(asin_test_3) {
  double num = -9;
  long double orig_res = asin(num), our_res = s21_asin(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(asin_test_4) {
  double num = INFINITY;
  long double orig_res = asin(num), our_res = s21_asin(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(asin_test_5) {
  double num = -INFINITY;
  long double orig_res = asin(num), our_res = s21_asin(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(asin_test_6) {
  double num = NAN;
  long double orig_res = asin(num), our_res = s21_asin(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(asin_test_7) {
  ck_assert_ldouble_nan(s21_asin(INFINITY));
  ck_assert_ldouble_nan(asin(INFINITY));
}
END_TEST

START_TEST(asin_test_8) {
  ck_assert_ldouble_nan(s21_asin(-INFINITY));
  ck_assert_ldouble_nan(asin(-INFINITY));
}
END_TEST

START_TEST(asin_test_9) {
  ck_assert_ldouble_nan(s21_asin(NAN));
  ck_assert_ldouble_nan(asin(NAN));
}
END_TEST

START_TEST(asin_test_10) {
  ck_assert_ldouble_eq_tol(s21_asin(1.0), asin(1.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_asin(-1.0), asin(-1.0), S21_EPS);
}
END_TEST

START_TEST(asin_test_11) {
  ck_assert_ldouble_eq_tol(s21_asin(0.0), asin(0.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_asin(-0.0), asin(-0.0), S21_EPS);
}
END_TEST

START_TEST(asin_test_12) {
  ck_assert_ldouble_eq_tol(s21_asin(0.0), asin(0.0), S21_EPS);
}
END_TEST

START_TEST(asin_test_13) {
  ck_assert_ldouble_eq_tol(s21_asin(-1), asin(-1), S21_EPS);
}
END_TEST

START_TEST(asin_test_14) { ck_assert_ldouble_eq_tol(s21_asin(1), asin(1), S21_EPS); }
END_TEST

START_TEST(asin_test_15) {
  ck_assert_ldouble_eq_tol(s21_asin(-sqrt(3) / 2), asin(-sqrt(3) / 2), S21_EPS);
}
END_TEST

START_TEST(asin_test_16) {
  ck_assert_ldouble_eq_tol(s21_asin(-sqrt(2) / 2), asin(-sqrt(2) / 2), S21_EPS);
}
END_TEST

START_TEST(asin_test_17) {
  ck_assert_ldouble_eq_tol(s21_asin(-1 / 2), asin(-1 / 2), S21_EPS);
}
END_TEST

START_TEST(asin_test_18) {
  ck_assert_ldouble_eq_tol(s21_asin(1 / 2), asin(1 / 2), S21_EPS);
}
END_TEST

START_TEST(asin_test_19) {
  ck_assert_ldouble_eq_tol(s21_asin(sqrt(2) / 2), asin(sqrt(2) / 2), S21_EPS);
}
END_TEST

START_TEST(asin_test_20) {
  ck_assert_ldouble_eq_tol(s21_asin(sqrt(3) / 2), asin(sqrt(3) / 2), S21_EPS);
}
END_TEST

START_TEST(asin_test_21) {
  ck_assert_ldouble_eq_tol(s21_asin(0.1), asin(0.1), S21_EPS);
}
END_TEST

START_TEST(atan_test_1) { ck_assert_float_eq(s21_atan(-15.01), atan(-15.01)); }
END_TEST

START_TEST(atan_test_2) {
  double num = -0.99;
  long double orig_res = s21_atan(num), our_res = atan(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(atan_test_3) { ck_assert_float_eq(-9999999999, -9999999999); }
END_TEST
START_TEST(atan_test_4) {
  ck_assert_ldouble_eq(s21_atan(INFINITY), atan(INFINITY));
  ck_assert_ldouble_eq(s21_atan(-INFINITY), atan(-INFINITY));
}
END_TEST

START_TEST(atan_test_5) {
  double num = NAN;
  long double orig_res = s21_atan(num), our_res = atan(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(atan_test_6) {
  ck_assert_ldouble_eq_tol(s21_atan(INFINITY), atan(INFINITY), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan((-INFINITY)), atan(-INFINITY), S21_EPS);
}
END_TEST

START_TEST(atan_test_7) {
  ck_assert_ldouble_nan(s21_atan(NAN));
  ck_assert_ldouble_nan(atan(NAN));
}
END_TEST

START_TEST(atan_test_8) {
  ck_assert_ldouble_eq_tol(s21_atan(1.0), atan(1.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(1.1), atan(1.1), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-1.0), atan(-1.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-1.1), atan(-1.1), S21_EPS);
}
END_TEST

START_TEST(atan_test_9) {
  ck_assert_ldouble_eq_tol(s21_atan(0.0), atan(0.0), S21_EPS);
  ck_assert_ldouble_eq_tol(s21_atan(-0.0), atan(-0.0), S21_EPS);
}
END_TEST

START_TEST(atan_test_10) {
  ck_assert_ldouble_eq_tol(s21_atan(-1), atan(-1), S21_EPS);
}
END_TEST

START_TEST(atan_test_11) {
  ck_assert_ldouble_eq_tol(s21_atan(-sqrt(3) / 2), atan(-sqrt(3) / 2), S21_EPS);
}
END_TEST

START_TEST(atan_test_12) {
  ck_assert_ldouble_eq_tol(s21_atan(-sqrt(2) / 2), atan(-sqrt(2) / 2), S21_EPS);
}
END_TEST

START_TEST(atan_test_13) {
  ck_assert_ldouble_eq_tol(s21_atan(-1 / 2), atan(-1 / 2), S21_EPS);
}
END_TEST

START_TEST(atan_test_14) {
  ck_assert_ldouble_eq_tol(s21_atan(1 / 2), atan(1 / 2), S21_EPS);
}
END_TEST

START_TEST(atan_test_15) {
  ck_assert_ldouble_eq_tol(s21_atan(2 / 2), atan(2 / 2), S21_EPS);
}
END_TEST

START_TEST(atan_test_16) {
  ck_assert_ldouble_eq_tol(s21_atan(sqrt(3) / 2), atan(sqrt(3) / 2), S21_EPS);
}
END_TEST

START_TEST(atan_test_17) { ck_assert_ldouble_eq_tol(s21_atan(1), atan(1), S21_EPS); }
END_TEST

START_TEST(atan_test_18) {
  ck_assert_ldouble_eq_tol(s21_atan(1.23456e-7), atan(1.23456e-7), S21_EPS);
}
END_TEST

START_TEST(atan_test_19) {
  ck_assert_ldouble_eq_tol(s21_atan(2.1234567), atan(2.1234567), S21_EPS);
}
END_TEST

START_TEST(atan_test_20) {
  ck_assert_ldouble_eq_tol(s21_atan(2.1234567e-7), atan(2.1234567e-7), S21_EPS);
}
END_TEST

START_TEST(atan_test_21) {
  ck_assert_ldouble_eq_tol(s21_atan(2.1234567e-16), atan(2.1234567e-16),
                           S21_EPS);
}
END_TEST

START_TEST(atan_test_22) { ck_assert_float_nan(s21_atan(S21_NAN)); }
END_TEST

START_TEST(atan_test_23) {
  ck_assert_ldouble_eq_tol(s21_atan(S21_M_PI / 2), atan(S21_M_PI / 2), S21_EPS);
}
END_TEST

START_TEST(atan_test_24) {
  ck_assert_ldouble_eq_tol(s21_atan(-S21_M_PI / 2), atan(-S21_M_PI / 2), S21_EPS);
}
END_TEST

START_TEST(atan_test_25) {
  ck_assert_ldouble_eq_tol(s21_atan(0.5), atan(0.5), S21_EPS);
}
END_TEST

START_TEST(ceil_test_1) { ck_assert_ldouble_eq(s21_ceil(-15.01), ceil(-15.01)); }
END_TEST

START_TEST(ceil_test_2) { ck_assert_ldouble_eq(s21_ceil(15.01), ceil(15.01)); }
END_TEST

START_TEST(ceil_test_3) { ck_assert_ldouble_eq(s21_ceil(INFINITY), ceil(INFINITY)); }
END_TEST

START_TEST(ceil_test_4) {
  ck_assert_ldouble_eq(s21_ceil(-INFINITY), ceil(-INFINITY));
}
END_TEST

START_TEST(ceil_test_5) { ck_assert_ldouble_eq(s21_ceil(-0.12), ceil(-0.12)); }
END_TEST

START_TEST(ceil_test_6) {
  double num = NAN;
  long double orig_res = ceil(num), our_res = s21_ceil(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(ceil_test_7) {
  ck_assert_ldouble_infinite(s21_ceil(INFINITY));
  ck_assert_ldouble_infinite(ceil(INFINITY));
}
END_TEST

START_TEST(ceil_test_8) {
  ck_assert_ldouble_nan(s21_ceil(NAN));
  ck_assert_ldouble_nan(ceil(NAN));
}
END_TEST

START_TEST(ceil_test_9) { ck_assert_ldouble_eq(s21_ceil(0), ceil(0)); }
END_TEST

START_TEST(ceil_test_11) { ck_assert_ldouble_eq(s21_ceil(0.0), ceil(0.0)); }
END_TEST

START_TEST(ceil_test_12) { ck_assert_ldouble_eq(s21_ceil(21.21), ceil(21.21)); }
END_TEST

START_TEST(ceil_test_13) { ck_assert_ldouble_eq(s21_ceil(21.91), ceil(21.91)); }
END_TEST

START_TEST(ceil_test_14) { ck_assert_ldouble_eq(s21_ceil(-21.21), ceil(-21.21)); }
END_TEST

START_TEST(ceil_test_15) { ck_assert_ldouble_eq(s21_ceil(-21.91), ceil(-21.91)); }
END_TEST

START_TEST(ceil_test_16) { ck_assert_ldouble_eq(s21_ceil(DBL_MAX), ceil(DBL_MAX)); }
END_TEST

START_TEST(ceil_test_17) {
  ck_assert_ldouble_eq(s21_ceil(DBL_MAX - 2), ceil(DBL_MAX - 2));
}
END_TEST

START_TEST(cos_test_1) {
  double num = 0.55;
  long double orig_res = s21_cos(num), our_res = s21_cos(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(cos_test_2) {
  double num = -0.999999;
  long double orig_res = cos(num), our_res = s21_cos(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(cos_test_3) {
  double num = 628;
  long double orig_res = cos(num), our_res = s21_cos(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(cos_test_4) { ck_assert_float_eq(s21_cos(0), cos(0)); }
END_TEST

START_TEST(cos_test_5) { ck_assert_float_eq(s21_cos(-1), cos(-1)); }
END_TEST

START_TEST(cos_test_6) {
  double num = NAN;
  long double orig_res = cos(num), our_res = s21_cos(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(cos_test_7) {
  double num = INFINITY;
  long double orig_res = cos(num), our_res = s21_cos(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(cos_test_8) {
  double num = -INFINITY;
  long double orig_res = cos(num), our_res = s21_cos(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(cos_test_9) {
  double x = 0;
  ck_assert_double_eq_tol(s21_cos(x), cosl(x), 1e-06);
}
END_TEST

START_TEST(cos_test_10) {
  ck_assert_ldouble_nan(s21_cos(-INFINITY));
  ck_assert_ldouble_nan(cosl(-INFINITY));
}
END_TEST

START_TEST(cos_test_11) {
  ck_assert_ldouble_nan(s21_cos(INFINITY));
  ck_assert_ldouble_nan(cosl(INFINITY));
}
END_TEST

START_TEST(cos_test_12) {
  ck_assert_ldouble_nan(s21_cos(NAN));
  ck_assert_ldouble_nan(cosl(NAN));
}
END_TEST

START_TEST(cos_test_13) { ck_assert_double_eq_tol(s21_cos(0.0), cosl(0.0), 1e-06); }
END_TEST

START_TEST(cos_test_14) {
  ck_assert_double_eq_tol(s21_cos(S21_M_PI / 4), cosl(S21_M_PI / 4), 1e-06);
}
END_TEST

START_TEST(cos_test_15) {
  ck_assert_double_eq_tol(s21_cos(S21_M_PI / 6), cosl(S21_M_PI / 6), 1e-06);
}
END_TEST

START_TEST(cos_test_16) {
  ck_assert_double_eq_tol(s21_cos(S21_M_PI / 3), cosl(S21_M_PI / 3), 1e-06);
}
END_TEST

START_TEST(cos_test_17) {
  ck_assert_double_eq_tol(s21_cos(S21_M_PI / 2), cosl(S21_M_PI / 2), 1e-06);
}
END_TEST

START_TEST(cos_test_18) {
  ck_assert_double_eq_tol(s21_cos(3 * S21_M_PI / 2), cosl(3 * S21_M_PI / 2), 1e-06);
}
END_TEST

START_TEST(cos_test_19) {
  ck_assert_double_eq_tol(s21_cos(2 * S21_M_PI), cosl(2 * S21_M_PI), 1e-06);
}
END_TEST

START_TEST(cos_test_20) {
  ck_assert_double_eq_tol(s21_cos(174.532925199433), cosl(174.532925199433),
                          1e-06);
}
END_TEST

START_TEST(cos_test_21) {
  ck_assert_double_eq_tol(s21_cos(-174.532925199433), cosl(-174.532925199433),
                          1e-06);
}
END_TEST

START_TEST(exp_test_0) {
  double x = 0;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_1) {
  double x = 1;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_2) {
  double x = 2;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_3) {
  double x = 3;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_4) {
  double x = 1.5;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_5) {
  double x = -1.5;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_6) {
  double x = 0.5;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_7) {
  double x = -0.5;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_8) {
  double x = 715;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_9) {
  double x = -715;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_10) {
  double x = -0;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_11) {
  double x = 'A';
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_12) {
  double x = -'N';
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_13) {
  double x = -'V';
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_14) {
  double x = +'B';
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_15) {
  double x = 0 / 1;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_16) {
  double x = 0 / 1;
  ck_assert_int_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_test_17) { ck_assert_float_eq(s21_exp(2), exp(2)); }
END_TEST

START_TEST(exp_test_18) { ck_assert_float_eq(s21_exp(-750), exp(-750)); }
END_TEST

START_TEST(exp_test_19) { ck_assert_float_eq(s21_exp(-2), exp(-2)); }
END_TEST

START_TEST(exp_test_20) {
  double num = NAN;
  long double orig_res = exp(num), our_res = s21_exp(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(exp_test_21) {
  double num = INFINITY;
  long double orig_res = exp(num), our_res = s21_exp(num);
  int suc = 0;
  if (isinf(orig_res) && isinf(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(exp_test_22) {
  double num = -INFINITY;
  long double orig_res = exp(num), our_res = s21_exp(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(exp_test_23) {
  double x = 0.0;
  ck_assert_ldouble_eq_tol(s21_exp(x), expl(x), 1e-06);
}
END_TEST

START_TEST(exp_test_24) {
  ck_assert_ldouble_eq_tol(s21_exp(-INFINITY), expl(-INFINITY), 1e-06);
}
END_TEST

START_TEST(exp_test_25) {
  ck_assert_ldouble_infinite(s21_exp(INFINITY));
  ck_assert_ldouble_infinite(expl(INFINITY));
}
END_TEST

START_TEST(exp_test_26) {
  ck_assert_ldouble_nan(s21_exp(NAN));
  ck_assert_ldouble_nan(expl(NAN));
}
END_TEST

START_TEST(exp_test_27) {
  double x = 0.0;
  ck_assert_ldouble_eq_tol(s21_exp(x), expl(x), 1e-06);
}
END_TEST

START_TEST(exp_test_28) {
  double x = -1.0;
  ck_assert_ldouble_eq_tol(s21_exp(x), expl(x), 1e-06);
}
END_TEST

START_TEST(exp_test_29) {
  double x = -100;
  ck_assert_ldouble_eq_tol(s21_exp(x), expl(x), 1e-06);
}
END_TEST

START_TEST(exp_test_30) {
  double x = -1000000;
  ck_assert_ldouble_eq_tol(s21_exp(x), expl(x), 1e-06);
}
END_TEST

START_TEST(exp_test_31) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_exp(x), expl(x), 1e-06);
}
END_TEST

START_TEST(exp_test_32) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_exp(x), expl(x), 1e-06);
}
END_TEST

START_TEST(exp_test_33) {
  double num = 1000000;
  long double orig_res = exp(num), our_res = s21_exp(num);
  int suc = 0;
  if (isinf(orig_res) && isinf(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(fabsl_test_1) {
    ck_assert_ldouble_eq(s21_fabs(0.000001), fabsl(0.000001));
    } END_TEST

START_TEST(fabsl_test_2) {
    ck_assert_ldouble_eq(s21_fabs(-21.000345), fabsl(-21.000345));
} END_TEST

START_TEST(fabsl_test_3) {
    ck_assert_ldouble_eq(s21_fabs(-2147483600.543), fabsl(-2147483600.543));
    } END_TEST

START_TEST(fabsl_test_4) {
    ck_assert_ldouble_eq(s21_fabs(2147483600.4857), fabsl(2147483600.4857));
} END_TEST

START_TEST(fabsl_test_5) {
    double a = -5.53151413431;
    ck_assert_ldouble_eq(s21_fabs(a), fabsl(a));
} END_TEST

START_TEST(fabsl_test_6) {
    double a = NAN;
    ck_assert_ldouble_nan(s21_fabs(a));
    ck_assert_ldouble_nan(fabsl(a));
} END_TEST

START_TEST(fabsl_test_7) {
    double a = S21_INF;
    ck_assert_ldouble_infinite(s21_fabs(a));
    ck_assert_ldouble_infinite(fabsl(a));
} END_TEST

START_TEST(fabsl_test_8) {
    double a = -9519359135915.53151413431;
    ck_assert_ldouble_eq_tol(s21_fabs(a), fabsl(a), S21_EPS);
} END_TEST

START_TEST(fabsl_test_10) {
    ck_assert_ldouble_nan(s21_fabs(NAN));
    ck_assert_ldouble_nan(fabsl(NAN));
} END_TEST

START_TEST(fabsl_test_11) {
  ck_assert_ldouble_eq(s21_fabs(-15.01), fabsl(-15.01));
} END_TEST

START_TEST(fabsl_test_12) {
  ck_assert_ldouble_eq(s21_fabs(15.01), fabsl(15.01));
} END_TEST

START_TEST(fabsl_test_13) {
  ck_assert_ldouble_eq(s21_fabs(INFINITY), fabsl(INFINITY));
} END_TEST

START_TEST(fabsl_test_14) {
  ck_assert_ldouble_eq(s21_fabs(-INFINITY), fabsl(-INFINITY));
} END_TEST

START_TEST(fabsl_test_15) {
  double num = NAN;
  long double orig_res = fabsl(num), our_res = s21_fabs(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
} END_TEST
START_TEST(floor_test_1) { ck_assert_ldouble_eq(s21_floor(0.0), floor(0.0)); }
END_TEST

START_TEST(floor_test_2) { ck_assert_ldouble_eq(s21_floor(21.21), floor(21.21)); }
END_TEST

START_TEST(floor_test_3) { ck_assert_ldouble_eq(s21_floor(21.91), floor(21.91)); }
END_TEST

START_TEST(floor_test_4) { ck_assert_ldouble_eq(s21_floor(-21.21), floor(-21.21)); }
END_TEST

START_TEST(floor_test_5) { ck_assert_ldouble_eq(s21_floor(-21.91), floor(-21.91)); }
END_TEST

START_TEST(floor_test_6) {
  ck_assert_ldouble_infinite(s21_floor(INFINITY));
  ck_assert_ldouble_infinite(floor(INFINITY));
}
END_TEST

START_TEST(floor_test_7) {
  ck_assert_ldouble_nan(s21_floor(NAN));
  ck_assert_ldouble_nan(floor(NAN));
}
END_TEST

START_TEST(floor_test_8) { ck_assert_ldouble_eq(s21_floor(0), floor(0)); }
END_TEST

START_TEST(floor_test_10) { ck_assert_ldouble_eq(s21_floor(-15.01), floor(-15.01)); }
END_TEST

START_TEST(floor_test_11) { ck_assert_ldouble_eq(s21_floor(15.01), floor(15.01)); }
END_TEST

START_TEST(floor_test_12) {
  ck_assert_ldouble_eq(s21_floor(INFINITY), floor(INFINITY));
}
END_TEST

START_TEST(floor_test_13) {
  ck_assert_ldouble_eq(s21_floor(-INFINITY), floor(-INFINITY));
}
END_TEST

START_TEST(floor_test_14) {
  double num = NAN;
  long double orig_res = floor(num), our_res = s21_floor(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(floor_test_15) { ck_assert_ldouble_eq(s21_floor(-0), floor(-0)); }
END_TEST


START_TEST(log_test_1) {
  double num = 456.789;
  long double orig_res = log(num);
  long double our_res = s21_log(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(log_test_2) {
  double num = NAN;
  long double orig_res = log(num);
  long double our_res = s21_log(num);
  int suc = 0;
  if (isnan(our_res) && isnan(orig_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(log_test_3) {
  double num = 0.001;
  long double orig_res = log(num);
  long double our_res = s21_log(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(log_test_4) {
  double num = 0.4;
  long double orig_res = log(num);
  long double our_res = s21_log(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(log_test_5) {
  double num = -INFINITY;
  long double orig_res = log(num);
  long double our_res = s21_log(num);
  int suc = 0;
  if (isnan(our_res) && isnan(orig_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(log_test_6) {
  double num = INFINITY;
  long double orig_res = log(num);
  long double our_res = s21_log(num);
  int suc = 0;
  if (isinf(our_res) && isinf(orig_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(log_test_7) {
  ck_assert_ldouble_infinite(s21_log(INFINITY));
  ck_assert_ldouble_infinite(log(INFINITY));

  ck_assert_ldouble_nan(s21_log(-INFINITY));
  ck_assert_ldouble_nan(log(-INFINITY));
}
END_TEST

START_TEST(log_test_8) {
  ck_assert_ldouble_nan(s21_log(NAN));
  ck_assert_ldouble_nan(log(NAN));
}
END_TEST

START_TEST(log_test_9) {
  ck_assert_ldouble_eq_tol(s21_log(1.0), log(1.0), 1e-6);
  ck_assert_ldouble_eq_tol(s21_log(1.1), log(1.1), 1e-6);
}
END_TEST

START_TEST(log_test_10) { ck_assert_ldouble_eq_tol(s21_log(0.5), log(0.5), 1e-6); }
END_TEST

START_TEST(log_test_11) { ck_assert_ldouble_eq_tol(s21_log(1), log(1), 1e-6); }
END_TEST

START_TEST(log_test_12) { ck_assert_ldouble_eq_tol(s21_log(100), log(100), 1e-6); }
END_TEST

START_TEST(log_test_13) { ck_assert_ldouble_eq_tol(s21_log(0.5), log(0.5), 1e-6); }
END_TEST

START_TEST(log_test_14) { ck_assert_ldouble_eq_tol(s21_log(0.5), log(0.5), 1e-6); }
END_TEST

START_TEST(log_test_15) {
  ck_assert_ldouble_eq_tol(s21_log(DBL_MAX), log(DBL_MAX), 1e-6);
}
END_TEST

START_TEST(log_test_16) {
  ck_assert_ldouble_eq_tol(s21_log(S21_M_PI / 3), log(S21_M_PI / 3), 1e-6);
}
END_TEST

START_TEST(log_test_17) {
  ck_assert_ldouble_eq_tol(s21_log(9.234578353457e-6), log(9.234578353457e-6),
                           1e-6);
}
END_TEST

START_TEST(log_test_18) {
  ck_assert_ldouble_eq_tol(s21_log(9.234578353457e6), log(9.234578353457e6),
                           1e-6);
}
END_TEST

START_TEST(log_test_19) {
  ck_assert_ldouble_eq_tol(s21_log(1234567.000000004), log(1234567.000000004),
                           1e-6);
}
END_TEST

START_TEST(log_test_20) {
  ck_assert_ldouble_eq_tol(s21_log(1.1e-16), log(1.1e-16), 1e-6);
}
END_TEST


START_TEST(log_test_21) {
  ck_assert_ldouble_eq_tol(s21_log(987654321123.123e-30),
                           log(987654321123.123e-30), 1e-6);
}
END_TEST

START_TEST(log_test_22) {
  ck_assert_ldouble_eq_tol(s21_log(98765.123e-11), log(98765.123e-11), 1e-6);
}
END_TEST

START_TEST(log_test_23) {
  ck_assert_ldouble_infinite(s21_log(0));
  ck_assert_ldouble_infinite(log(0));
}
END_TEST

START_TEST(s21_fmod_test_1) {
  ck_assert_ldouble_eq(s21_fmod(2.34, 2.0), fmod(2.34, 2.0));
}
END_TEST

START_TEST(s21_fmod_test_2) {
  ck_assert_ldouble_eq(s21_fmod(-2.34, 2.0), fmod(-2.34, 2.0));
}
END_TEST

START_TEST(s21_fmod_test_3) {
  ck_assert_ldouble_eq(s21_fmod(2.34, -2.0), fmod(2.34, -2.0));
}
END_TEST

START_TEST(s21_fmod_test_4) {
  ck_assert_ldouble_eq(s21_fmod(-2.34, -2.0), fmod(-2.34, -2.0));
}
END_TEST

START_TEST(s21_fmod_test_5) {
  ck_assert_ldouble_eq(s21_fmod(21.21, 3), fmod(21.21, 3));
}
END_TEST

START_TEST(s21_fmod_test_6) {
  ck_assert_ldouble_eq(s21_fmod(3, 21.21), fmod(3, 21.21));
}
END_TEST

START_TEST(s21_fmod_test_7) {
  ck_assert_ldouble_eq(s21_fmod(-21.21, 3), fmod(-21.21, 3));
}
END_TEST

START_TEST(s21_fmod_test_8) {
  ck_assert_ldouble_eq(s21_fmod(3, -21.21), fmod(3, -21.21));
}
END_TEST

START_TEST(s21_fmod_test_9) {
  ck_assert_ldouble_eq(s21_fmod(100500, 9), fmod(100500, 9));
}
END_TEST

START_TEST(s21_fmod_test_10) {
  ck_assert_ldouble_eq(s21_fmod(-100500, -9), fmod(-100500, -9));
}
END_TEST

START_TEST(s21_fmod_test_11) {
  ck_assert_ldouble_eq(s21_fmod(-9, -100500), fmod(-9, -100500));
}
END_TEST

START_TEST(s21_fmod_test_12) {
  ck_assert_ldouble_eq(s21_fmod(-9, -9), fmod(-9, -9));
}
END_TEST

START_TEST(s21_fmod_test_13) {
  ck_assert_ldouble_eq(s21_fmod(10, 5), fmod(10, 5));
}
END_TEST

START_TEST(s21_fmod_test_14) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, INFINITY));
  ck_assert_ldouble_nan(fmod(INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test_15) {
  ck_assert_ldouble_nan(s21_fmod(NAN, NAN));
  ck_assert_ldouble_nan(fmod(NAN, NAN));
}
END_TEST

START_TEST(s21_fmod_test_16) {
  ck_assert_ldouble_nan(s21_fmod(2.45, 0));
  ck_assert_ldouble_nan(fmod(2.45, 0));
}
END_TEST

START_TEST(s21_fmod_test_17) {
  ck_assert_ldouble_nan(s21_fmod(0, 0));
  ck_assert_ldouble_nan(fmod(0, 0));
}
END_TEST

START_TEST(s21_fmod_test_18) {
  ck_assert_ldouble_nan(s21_fmod(INFINITY, 0));
  ck_assert_ldouble_nan(fmod(INFINITY, 0));
}
END_TEST

START_TEST(s21_fmod_test_19) {
  double num = NAN;
  long double orig_res = fmod(num, 2.0), our_res = s21_fmod(num, 2.0);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(s21_fmod_test_20) {
  double num = NAN;
  long double orig_res = fmod(2.0, num), our_res = s21_fmod(2.0, num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(s21_fmod_test_21) {
  ck_assert_ldouble_eq(s21_fmod(2.0, INFINITY), fmod(2.0, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test_22) {
  double num = INFINITY;
  long double orig_res = fmod(num, 2.0), our_res = s21_fmod(num, 2.0);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(s21_fmod_test_23) {
  ck_assert_ldouble_eq(s21_fmod(2.0, INFINITY), fmod(2.0, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test_24) {
  ck_assert_ldouble_eq(s21_fmod(2.0, -INFINITY), fmod(2.0, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test_25) {
  double num = -INFINITY;
  long double orig_res = fmod(num, 2.0), our_res = s21_fmod(num, 2.0);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(s21_fmod_test_26) {
  ck_assert_ldouble_nan(s21_fmod(S21_INF, S21_INF));
  ck_assert_ldouble_nan(fmod(S21_INF, S21_INF));
}
END_TEST

START_TEST(s21_fmod_test_27) {
  ck_assert_ldouble_eq(s21_fmod(0, 23), fmod(0, 23));
}
END_TEST

START_TEST(pow_test_1) {
  double num = 456.789;
  double ex = 1.1;
  long double orig_res = pow(num, ex), our_res = s21_pow(num, ex);
  int suc = 0;
  ck_assert_float_eq(our_res, orig_res);
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(pow_test_2) {
  double num = INFINITY;
  double ex = 1.1;
  long double orig_res = pow(num, ex), our_res = s21_pow(num, ex);
  int suc = 0;
  if (isinf(our_res) && isinf(orig_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(pow_test_3) {
  double num = NAN;
  double ex = 1.1;
  long double orig_res = pow(num, ex), our_res = s21_pow(num, ex);
  int suc = 0;
  if (isnan(our_res) && isnan(orig_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(pow_test_4) {
  double num = NAN;
  double ex = NAN;
  long double orig_res = pow(num, ex), our_res = s21_pow(num, ex);
  int suc = 0;
  if (isnan(our_res) && isnan(orig_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(pow_test_5) {
  double num = 0.001;
  double ex = NAN;
  long double orig_res = pow(num, ex), our_res = s21_pow(num, ex);
  int suc = 0;
  if (isnan(our_res) && isnan(orig_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(pow_test_6) {
  double num = INFINITY;
  double ex = INFINITY;
  long double orig_res = pow(num, ex), our_res = s21_pow(num, ex);
  int suc = 0;
  if (isinf(our_res) && isinf(orig_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(pow_test_7) {
  double num = INFINITY;
  double ex = INFINITY;
  long double orig_res = pow(num, ex), our_res = s21_pow(num, ex);
  int suc = 0;
  if (isinf(our_res) && isinf(orig_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(pow_test_8) {
  long double base = 16.1435;
  long double exp = 4.;
  ck_assert_double_eq_tol(s21_pow(base, exp), pow(base, exp), 1e-06);
}
END_TEST

START_TEST(pow_test_9) {
  long double base = -10.1261;
  long double exp = -0.72;
  ck_assert_double_nan(s21_pow(base, exp));
  ck_assert_double_nan(pow(base, exp));
}
END_TEST

START_TEST(pow_test_10) {
  long double base = +0;
  long double exp = -0.33;
  ck_assert_ldouble_infinite(s21_pow(base, exp));
  ck_assert_ldouble_infinite(pow(base, exp));
}
END_TEST

START_TEST(pow_test_12) {
  long double base = -0;
  long double exp = -0.33;
  ck_assert_ldouble_infinite(s21_pow(base, exp));
  ck_assert_ldouble_infinite(pow(base, exp));
}
END_TEST

START_TEST(pow_test_13) {
  long double base = -0;
  long double exp = S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), S21_EPS);
}
END_TEST

START_TEST(pow_test_14) {
  long double base = +0;
  long double exp = 123;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_15) {
  long double base = -0;
  long double exp = 123;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_16) {
  long double base = -0;
  long double exp = S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_17) {
  long double base = -1;
  long double exp = S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_18) {
  long double base = -1;
  long double exp = S21_NAN;
  ck_assert_double_nan(pow(base, exp));
  ck_assert_double_nan(s21_pow(base, exp));
}
END_TEST

START_TEST(pow_test_19) {
  long double base = S21_NAN;
  long double exp = 0;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_20) {
  long double base = -123;
  long double exp = S21_NAN;
  ck_assert_double_nan(s21_pow(base, exp));
  ck_assert_double_nan(pow(base, exp));
}
END_TEST

START_TEST(pow_test_21) {
  long double base = 0.5591951;
  long double exp = -S21_INF;
  ck_assert_ldouble_infinite(pow(base, exp));
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(pow_test_22) {
  long double base = 1.5591951;
  long double exp = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_23) {
  long double base = 0.5591951;
  long double exp = S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_24) {
  long double base = 1.5591951;
  long double exp = S21_INF;
  ck_assert_ldouble_infinite(s21_pow(base, exp));
  ck_assert_ldouble_infinite(pow(base, exp));
}
END_TEST

START_TEST(pow_test_25) {
  long double base = -S21_INF;
  long double exp = -193491;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_26) {
  long double base = -S21_INF;
  long double exp = -142;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_27) {
  long double base = -S21_INF;
  long double exp = 141;
  ck_assert_ldouble_infinite(s21_pow(base, exp));
  ck_assert_ldouble_infinite(pow(base, exp));
}
END_TEST

START_TEST(pow_test_28) {
  long double base = -S21_INF;
  long double exp = 142;
  ck_assert_ldouble_infinite(s21_pow(base, exp));
  ck_assert_ldouble_infinite(pow(base, exp));
}
END_TEST

START_TEST(pow_test_29) {
  long double base = S21_INF;
  long double exp = -1;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_30) {
  long double base = S21_INF;
  long double exp = 1;
  ck_assert_ldouble_infinite(s21_pow(base, exp));
  ck_assert_ldouble_infinite(pow(base, exp));
}
END_TEST

START_TEST(pow_test_31) {
  ck_assert_ldouble_eq_tol(s21_pow(0.0, 0.0), pow(0.0, 0.0), 1e-6);
}
END_TEST

START_TEST(pow_test_32) {
  ck_assert_ldouble_eq_tol(s21_pow(-1, 4), pow(-1, 4), 1e-6);
}
END_TEST

START_TEST(pow_test_33) {
  ck_assert_ldouble_eq_tol(s21_pow(2, 18), pow(2, 18), 1e-6);
}
END_TEST

START_TEST(pow_test_34) {
  ck_assert_ldouble_eq_tol(s21_pow(2.1, 11), pow(2.1, 11), 1e-6);
}
END_TEST

START_TEST(pow_test_35) {
  ck_assert_ldouble_eq_tol(s21_pow(1.23456e-7, 2.21), pow(1.23456e-7, 2.21),
                           1e-6);
}
END_TEST

START_TEST(pow_test_36) {
  ck_assert_ldouble_eq_tol(s21_pow(2.1234567, -2), pow(2.1234567, -2), 1e-6);
}
END_TEST

START_TEST(pow_test_37) {
  ck_assert_ldouble_eq_tol(s21_pow(2.1234567, -2), pow(2.1234567, -2), 1e-6);
}
END_TEST

START_TEST(pow_test_38) {
  long double orig_res = pow(2.1234567e-7, -2.45e4),
              our_res = s21_pow(2.1234567e-7, -2.45e4);
  int suc = 0;
  if (isinf(our_res) && isinf(orig_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(pow_test_39) {
  ck_assert_ldouble_eq_tol(s21_pow(9.99999999e3, 9.95e-4),
                           pow(9.99999999e3, 9.95e-4), 1e-6);
}
END_TEST

START_TEST(pow_test_40) {
  long double exp = -12;
  ck_assert_ldouble_infinite(s21_pow(+0, exp));
  ck_assert_ldouble_infinite(pow(+0, exp));
}
END_TEST

START_TEST(pow_test_41) {
  long double exp = -12;
  ck_assert_ldouble_infinite(s21_pow(-0, exp));
  ck_assert_ldouble_infinite(pow(-0, exp));
}
END_TEST

START_TEST(pow_test_42) {
  long double exp = 0;
  ck_assert_ldouble_eq_tol(s21_pow(-0, exp), pow(-0, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_43) {
  long double exp = S21_NAN;
  ck_assert_double_nan(s21_pow(+0, exp));
  ck_assert_double_nan(pow(+0, exp));
}
END_TEST

START_TEST(pow_test_44) {
  long double exp = 2.456;
  ck_assert_ldouble_eq_tol(s21_pow(+0, exp), pow(+0, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_45) {
  long double exp = -S21_INF;
  ck_assert_ldouble_infinite(s21_pow(+0, exp));
  ck_assert_ldouble_infinite(pow(+0, exp));
}
END_TEST

START_TEST(pow_test_46) {
  long double exp = 56;
  ck_assert_ldouble_eq_tol(s21_pow(+0, exp), pow(+0, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_47) {
  long double exp = 56;
  ck_assert_ldouble_eq_tol(s21_pow(-0, exp), pow(-0, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_48) {
  long double exp = 56.345;
  ck_assert_ldouble_eq_tol(s21_pow(-0, exp), pow(-0, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_49) {
  long double exp = S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(-1, exp), pow(-1, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_50) {
  long double exp = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(-1, exp), pow(-1, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_51) {
  long double exp = S21_NAN;
  ck_assert_ldouble_eq_tol(s21_pow(+1, exp), pow(+1, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_52) {
  long double exp = -0;
  ck_assert_ldouble_eq_tol(s21_pow(4567, exp), pow(4567, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_53) {
  long double exp = +0;
  ck_assert_ldouble_eq_tol(s21_pow(34567, exp), pow(34567, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_54) {
  long double exp = -0;
  ck_assert_ldouble_eq_tol(s21_pow(S21_NAN, exp), pow(S21_NAN, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_55) {
  long double exp = +0;
  ck_assert_ldouble_eq_tol(s21_pow(S21_NAN, exp), pow(S21_NAN, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_56) {
  long double exp = S21_NAN;
  ck_assert_double_nan(s21_pow(S21_NAN, exp));
  ck_assert_double_nan(pow(S21_NAN, exp));
}
END_TEST

START_TEST(pow_test_57) {
  long double exp = S21_INF;
  ck_assert_ldouble_infinite(s21_pow(S21_INF, exp));
  ck_assert_ldouble_infinite(pow(S21_INF, exp));
}
END_TEST

START_TEST(pow_test_58) {
  long double exp = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(-S21_INF, exp), pow(-S21_INF, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_59) {
  double exp = S21_INF;
  ck_assert_ldouble_infinite(s21_pow(-S21_INF, exp));
  ck_assert_ldouble_infinite(pow(-S21_INF, exp));
}
END_TEST

START_TEST(pow_test_60) {
  double exp;
  double res1;
  long double res2;

  for (exp = 0.0; exp > -1000; exp -= 0.1) {
    res1 = pow(S21_INF, exp);
    res2 = s21_pow(S21_INF, exp);
  }
  ck_assert_ldouble_eq_tol(res1, res2, 1e-6);
}
END_TEST

START_TEST(pow_test_61) {
  double base;
  double res1;
  long double res2;

  for (base = 0.0; base < 10; base += 0.1) {
    res1 = pow(base, S21_INF);
    res2 = s21_pow(base, S21_INF);
  }
  ck_assert_ldouble_infinite(res1);
  ck_assert_ldouble_infinite(res2);
}
END_TEST

START_TEST(pow_test_62) {
  double base;
  double res1;
  long double res2;

  for (base = 0.0; base > -10; base -= 0.1) {
    res1 = pow(base, S21_INF);
    res2 = s21_pow(base, S21_INF);
  }
  ck_assert_ldouble_infinite(res1);
  ck_assert_ldouble_infinite(res2);
}
END_TEST

START_TEST(pow_test_63) {
  long double base;
  long double res1;
  long double res2;

  for (base = 0.0; base < 10; base += 0.1) {
    res1 = pow(base, -S21_INF);
    res2 = s21_pow(base, -S21_INF);
  }
  ck_assert_ldouble_eq_tol(res1, res2, 1e-6);
}
END_TEST

START_TEST(pow_test_64) {
  long double base;
  long double res1;
  long double res2;

  for (base = 0.0; base > -10; base -= 0.1) {
    res1 = pow(base, -S21_INF);
    res2 = s21_pow(base, -S21_INF);
  }
  ck_assert_ldouble_eq_tol(res1, res2, 1e-6);
}
END_TEST

START_TEST(pow_test_65) {
  double exp;
  double res1;
  long double res2;

  for (exp = 0.0; exp > -10; exp -= 0.1) {
    if (fmod(exp, 2) != 0) {
      res1 = pow(-S21_INF, exp);
      res2 = s21_pow(-S21_INF, exp);
    }
  }
  ck_assert_ldouble_eq_tol(res1, res2, 1e-6);
}
END_TEST

START_TEST(pow_test_66) {
  double exp;
  double res1;
  long double res2;

  for (exp = 0.0; exp > -10; exp -= 0.1) {
    if (fmod(exp, 2) == 0) {
      res1 = pow(-S21_INF, exp);
      res2 = s21_pow(-S21_INF, exp);
    }
  }
  ck_assert_ldouble_eq_tol(res1, res2, 1e-6);
}
END_TEST

START_TEST(pow_test_67) {
  double exp;
  double res1;
  long double res2;

  for (exp = 0.0; exp < 10; exp += 0.1) {
    if (fmod(exp, 2) != 0) {
      res1 = pow(-S21_INF, exp);
      res2 = s21_pow(-S21_INF, exp);
    }
  }
  ck_assert_ldouble_infinite(res1);
  ck_assert_ldouble_infinite(res2);
}
END_TEST

START_TEST(pow_test_68) {
  double exp;
  double res1;
  long double res2;

  for (exp = 0.0; exp < 10; exp += 0.1) {
    if (fmod(exp, 2) == 0) {
      res1 = pow(-S21_INF, exp);
      res2 = s21_pow(-S21_INF, exp);
    }
  }
  ck_assert_ldouble_eq_tol(res2, res1, 1e-6);
}
END_TEST

START_TEST(pow_test_69) {
  long double exp = 3;
  ck_assert_ldouble_eq_tol(s21_pow(-3, exp), pow(-3, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_70) {
  long double exp = -3;
  ck_assert_ldouble_eq_tol(s21_pow(-3, exp), pow(-3, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_71) {
  long double exp = -3;
  ck_assert_ldouble_eq_tol(s21_pow(3, exp), pow(3, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_72) {
  long double exp = 3;
  ck_assert_ldouble_eq_tol(s21_pow(3, exp), pow(3, exp), 1e-6);
}
END_TEST

START_TEST(pow_test_73) {
  long double base = -0;
  long double exp = S21_INF;
  long double res = pow(base, exp);
  long double res1 = s21_pow(base, exp);
  ck_assert_ldouble_eq_tol(res, res1, 1e-6);
}
END_TEST

START_TEST(pow_test_74) {
  long double exp;
  long double base = -0;
  long double res;
  long double res1;
  for (exp = 0.0; exp < 10; exp += 0.1) {
    if (fmod(exp, 2) != 0) {
      res = pow(base, exp);
      res1 = s21_pow(base, exp);
    }
  }
  ck_assert_ldouble_eq_tol(res, res1, 1e-6);
}
END_TEST

START_TEST(sin_test_1) {
  double num = 0.55;
  long double orig_res = s21_sin(num), our_res = s21_sin(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(sin_test_2) { ck_assert_float_eq(s21_sin(0), sin(0)); }
END_TEST

START_TEST(sin_test_3) {
  double num = 1;
  long double orig_res = s21_sin(num), our_res = s21_sin(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(sin_test_4) {
  double num = -1;
  long double orig_res = s21_sin(num), our_res = s21_sin(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(sin_test_5) {
  double num = 0.999999;
  long double orig_res = s21_sin(num), our_res = s21_sin(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(sin_test_6) {
  double num = -0.999999;
  long double orig_res = s21_sin(num), our_res = s21_sin(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(sin_test_7) {
  double num = NAN;
  long double orig_res = sin(num), our_res = s21_sin(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(sin_test_8) {
  double num = INFINITY;
  long double orig_res = sin(num), our_res = s21_sin(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(sin_test_9) {
  double num = -INFINITY;
  long double orig_res = sin(num), our_res = s21_sin(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(sin_test_10) {
  double x = 0;
  ck_assert_double_eq_tol(s21_sin(x), sinl(x), 1e-06);
}
END_TEST

START_TEST(sin_test_11) {
  ck_assert_ldouble_nan(s21_sin(-INFINITY));
  ck_assert_ldouble_nan(sinl(-INFINITY));
}
END_TEST

START_TEST(sin_test_12) {
  ck_assert_ldouble_nan(s21_sin(INFINITY));
  ck_assert_ldouble_nan(sinl(INFINITY));
}
END_TEST

START_TEST(sin_test_13) {
  ck_assert_ldouble_nan(s21_sin(NAN));
  ck_assert_ldouble_nan(sinl(NAN));
}
END_TEST

START_TEST(sin_test_14) { ck_assert_double_eq_tol(s21_sin(0.0), sin(0.0), 1e-06); }
END_TEST

START_TEST(sin_test_15) {
  ck_assert_double_eq_tol(s21_sin(S21_M_PI / 6), sin(S21_M_PI / 6), 1e-06);
}
END_TEST

START_TEST(sin_test_16) {
  ck_assert_double_eq_tol(s21_sin(S21_M_PI / 4), sin(S21_M_PI / 4), 1e-06);
}
END_TEST

START_TEST(sin_test_17) {
  ck_assert_double_eq_tol(s21_sin(S21_M_PI / 3), sin(S21_M_PI / 3), 1e-06);
}
END_TEST

START_TEST(sin_test_18) {
  ck_assert_double_eq_tol(s21_sin(S21_M_PI / 2), sin(S21_M_PI / 2), 1e-06);
}
END_TEST

START_TEST(sin_test_19) {
  ck_assert_double_eq_tol(s21_sin(3 * S21_M_PI / 2), sin(3 * S21_M_PI / 2), 1e-06);
}
END_TEST

START_TEST(sin_test_20) {
  ck_assert_double_eq_tol(s21_sin(2 * S21_M_PI), sin(2 * S21_M_PI), 1e-06);
}
END_TEST

START_TEST(sin_test_21) {
  ck_assert_double_eq_tol(s21_sin(-2 * S21_M_PI), sin(-2 * S21_M_PI), 1e-06);
}
END_TEST

START_TEST(sin_test_22) {
  ck_assert_double_eq_tol(s21_sin(-3 * S21_M_PI), sin(-3 * S21_M_PI), 1e-06);
}
END_TEST

START_TEST(sin_test_23) {
  ck_assert_double_eq_tol(s21_sin(174.532925199433), sin(174.532925199433),
                          1e-06);
}
END_TEST

START_TEST(sin_test_24) {
  ck_assert_double_eq_tol(s21_sin(-174.532925199433), sin(-174.532925199433),
                          1e-06);
}
END_TEST

START_TEST(sin_test_25) {
  ck_assert_double_eq_tol(s21_sin(-S21_M_PI), sin(-S21_M_PI), 1e-06);
}
END_TEST

START_TEST(sqrt_test_1) {
    double num = INFINITY;
    long double orig_res = sqrt(num), our_res = s21_sqrt(num);
    int suc = 0;
    if (isinf(orig_res) && isinf(our_res)) suc = 1;
    ck_assert_int_eq(1, suc);
} END_TEST

START_TEST(sqrt_test_2) {
    double num = -INFINITY;
    long double orig_res = sqrt(num), our_res = s21_sqrt(num);
    int suc = 0;
    if (isnan(orig_res) && isnan(our_res)) suc = 1;
    ck_assert_int_eq(1, suc);
} END_TEST

START_TEST(sqrt_test_3) {
    double num = -15.01;
    ck_assert_ldouble_nan(s21_sqrt(num));
    ck_assert_ldouble_nan(sqrt(num));
} END_TEST

START_TEST(sqrt_test_4) {
    double num = 0.9999;
    long double orig_res = sqrt(num), our_res = s21_sqrt(num);
    int suc = 0;
    if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
    ck_assert_int_eq(1, suc);
} END_TEST

START_TEST(sqrt_test_5) {
    double num = NAN;
    long double orig_res = sqrt(num), our_res = s21_sqrt(num);
    int suc = 0;
    if (isnan(orig_res) && isnan(our_res)) suc = 1;
    ck_assert_int_eq(1, suc);
} END_TEST

START_TEST(sqrt_test_6) {
    ck_assert_ldouble_infinite(s21_sqrt(INFINITY));
    ck_assert_ldouble_infinite(sqrt(INFINITY));
}
END_TEST

START_TEST(sqrt_test_7) {
    ck_assert_ldouble_nan(s21_sqrt(NAN));
    ck_assert_ldouble_nan(sqrt(NAN));
}
END_TEST

START_TEST(sqrt_test_8) {
    ck_assert_ldouble_eq_tol(s21_sqrt(1.0), sqrt(1.0), 1e-6);
    ck_assert_ldouble_eq_tol(s21_sqrt(1.1), sqrt(1.1), 1e-6);
}
END_TEST

START_TEST(sqrt_test_9) {
    ck_assert_ldouble_eq_tol(s21_sqrt(0.0), sqrt(0.0), 1e-6);
    ck_assert_ldouble_eq_tol(s21_sqrt(-0.0), sqrt(-0.0), 1e-6);
} END_TEST

START_TEST(sqrt_test_10) {
    ck_assert_ldouble_eq_tol(s21_sqrt(10e+16), sqrt(10e+16), 1e-6);
} END_TEST

START_TEST(sqrt_test_12) {
    ck_assert_ldouble_eq_tol(s21_sqrt(1), sqrt(1), 1e-6);
} END_TEST

START_TEST(sqrt_test_13) {
    ck_assert_ldouble_eq_tol(s21_sqrt(100), sqrt(100), 1e-6);
} END_TEST

START_TEST(sqrt_test_14) {
    ck_assert_ldouble_eq_tol(s21_sqrt(98765432.123), sqrt(98765432.123), 1e-6);
} END_TEST

START_TEST(sqrt_test_15) {
    ck_assert_ldouble_eq_tol(s21_sqrt(981.123e6), sqrt(981.123e6), 1e-6);
} END_TEST

START_TEST(sqrt_test_16) {
    ck_assert_ldouble_eq_tol(s21_sqrt(981.123e-15), sqrt(981.123e-15), 1e-6);
} END_TEST

START_TEST(tan_test_1) { ck_assert_float_eq(s21_tan(-15.01), tan(-15.01)); }
END_TEST

START_TEST(tan_test_2) {
  double num = 0.55;
  long double orig_res = s21_tan(num), our_res = s21_tan(num);
  int suc = 0;
  if ((fabsl(orig_res - our_res) <= 1e-6)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(tan_test_3) { ck_assert_float_eq(-9999999999, -9999999999); }
END_TEST

START_TEST(tan_test_4) {
  double num = NAN;
  long double orig_res = tan(num), our_res = s21_tan(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(tan_test_5) {
  double num = INFINITY;
  long double orig_res = tan(num), our_res = s21_tan(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(tan_test_6) {
  double num = -INFINITY;
  long double orig_res = tan(num), our_res = s21_tan(num);
  int suc = 0;
  if (isnan(orig_res) && isnan(our_res)) suc = 1;
  ck_assert_int_eq(1, suc);
}
END_TEST

START_TEST(tan_test_7) {
  double x = 0;
  ck_assert_double_eq_tol(s21_tan(x), tanl(x), 1e-06);
}
END_TEST

START_TEST(tan_test_8) {
  ck_assert_ldouble_nan(s21_tan(-INFINITY));
  ck_assert_ldouble_nan(tanl(-INFINITY));
}
END_TEST

START_TEST(tan_test_9) {
  ck_assert_ldouble_nan(s21_tan(INFINITY));
  ck_assert_ldouble_nan(tanl(INFINITY));
}
END_TEST

START_TEST(tan_test_10) {
  ck_assert_ldouble_nan(s21_tan(NAN));
  ck_assert_ldouble_nan(tanl(NAN));
}
END_TEST

START_TEST(tan_test_11) { ck_assert_double_eq_tol(s21_tan(0.0), tanl(0.0), 1e-06); }
END_TEST

START_TEST(tan_test_12) {
  ck_assert_double_eq_tol(s21_tan(S21_M_PI / 6), tanl(S21_M_PI / 6), 1e-06);
}
END_TEST

START_TEST(tan_test_13) {
  ck_assert_double_eq_tol(s21_tan(S21_M_PI / 4), tanl(S21_M_PI / 4), 1e-06);
}
END_TEST

START_TEST(tan_test_14) {
  ck_assert_double_eq_tol(s21_tan(-2 * S21_M_PI), tanl(-2 * S21_M_PI), 1e-06);
}
END_TEST

START_TEST(tan_test_15) {
  ck_assert_double_eq_tol(s21_tan(S21_M_PI), tanl(S21_M_PI), 1e-06);
}
END_TEST

START_TEST(tan_test_16) {
  ck_assert_double_eq_tol(s21_tan(S21_M_PI / 3), tanl(S21_M_PI / 3), 1e-06);
}
END_TEST

START_TEST(tan_test_17) {
  ck_assert_double_eq_tol(s21_tan(3 * S21_M_PI / 3), tanl(3 * S21_M_PI / 3), 1e-06);
}
END_TEST

START_TEST(tan_test_18) {
  ck_assert_double_eq_tol(s21_tan(174.532925199433), tanl(174.532925199433),
                          1e-06);
}
END_TEST

START_TEST(tan_test_19) {
  ck_assert_double_eq_tol(s21_tan(-174.532925199433), tanl(-174.532925199433),
                          1e-06);
}
END_TEST

START_TEST(tan_test_20) {
  ck_assert_double_eq_tol(s21_tan(S21_M_PI / 2), tanl(S21_M_PI / 2), 1e-06);
}
END_TEST

START_TEST(tan_test_21) {
  ck_assert_double_eq_tol(s21_tan(2 * S21_M_PI / 2), tanl(2 * S21_M_PI / 2), 1e-06);
}
END_TEST

START_TEST(tan_test_22) {
  ck_assert_double_eq_tol(s21_tan(2 * S21_M_PI / 2), tanl(2 * S21_M_PI / 2), 1e-06);
}
END_TEST

START_TEST(tan_test_23) {
  ck_assert_double_eq_tol(s21_tan(3 * S21_M_PI_2), tanl(3 * S21_M_PI_2), 1e-06);
}
END_TEST

int main(void) {
    Suite *s1 = suite_create("Core");
    TCase *tc1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1,  tc1);

    tcase_add_test(tc1, abs_test_1);
    tcase_add_test(tc1, abs_test_2);
    tcase_add_test(tc1, abs_test_3);
    tcase_add_test(tc1, abs_test_4);
    tcase_add_test(tc1, abs_test_5);
    tcase_add_test(tc1, abs_test_6);
    tcase_add_test(tc1, abs_test_7);
    tcase_add_test(tc1, abs_test_8);
    tcase_add_test(tc1, abs_test_9);
    tcase_add_test(tc1, abs_test_10);
    tcase_add_test(tc1, acos_test_1);
    tcase_add_test(tc1, acos_test_2);
    tcase_add_test(tc1, acos_test_3);
    tcase_add_test(tc1, acos_test_4);
    tcase_add_test(tc1, acos_test_5);
    tcase_add_test(tc1, acos_test_6);
    tcase_add_test(tc1, acos_test_7);
    tcase_add_test(tc1, acos_test_8);
    tcase_add_test(tc1, acos_test_9);
    tcase_add_test(tc1, acos_test_10);
    tcase_add_test(tc1, acos_test_11);
    tcase_add_test(tc1, acos_test_12);
    tcase_add_test(tc1, acos_test_13);
    tcase_add_test(tc1, acos_test_14);
    tcase_add_test(tc1, acos_test_15);
    tcase_add_test(tc1, acos_test_16);
    tcase_add_test(tc1, acos_test_17);
    tcase_add_test(tc1, acos_test_18);
    tcase_add_test(tc1, acos_test_19);
    tcase_add_test(tc1, acos_test_20);
    tcase_add_test(tc1, acos_test_21);
    tcase_add_test(tc1, asin_test_1);
    tcase_add_test(tc1, asin_test_2);
    tcase_add_test(tc1, asin_test_3);
    tcase_add_test(tc1, asin_test_4);
    tcase_add_test(tc1, asin_test_5);
    tcase_add_test(tc1, asin_test_6);
    tcase_add_test(tc1, asin_test_7);
    tcase_add_test(tc1, asin_test_8);
    tcase_add_test(tc1, asin_test_9);
    tcase_add_test(tc1, asin_test_10);
    tcase_add_test(tc1, asin_test_11);
    tcase_add_test(tc1, asin_test_12);
    tcase_add_test(tc1, asin_test_13);
    tcase_add_test(tc1, asin_test_14);
    tcase_add_test(tc1, asin_test_15);
    tcase_add_test(tc1, asin_test_16);
    tcase_add_test(tc1, asin_test_17);
    tcase_add_test(tc1, asin_test_18);
    tcase_add_test(tc1, asin_test_19);
    tcase_add_test(tc1, asin_test_20);
    tcase_add_test(tc1, asin_test_21);
    tcase_add_test(tc1, atan_test_1);
    tcase_add_test(tc1, atan_test_2);
    tcase_add_test(tc1, atan_test_3);
    tcase_add_test(tc1, atan_test_4);
    tcase_add_test(tc1, atan_test_5);
    tcase_add_test(tc1, atan_test_6);
    tcase_add_test(tc1, atan_test_7);
    tcase_add_test(tc1, atan_test_8);
    tcase_add_test(tc1, atan_test_9);
    tcase_add_test(tc1, atan_test_10);
    tcase_add_test(tc1, atan_test_11);
    tcase_add_test(tc1, atan_test_12);
    tcase_add_test(tc1, atan_test_13);
    tcase_add_test(tc1, atan_test_14);
    tcase_add_test(tc1, atan_test_15);
    tcase_add_test(tc1, atan_test_16);
    tcase_add_test(tc1, atan_test_17);
    tcase_add_test(tc1, atan_test_18);
    tcase_add_test(tc1, atan_test_19);
    tcase_add_test(tc1, atan_test_20);
    tcase_add_test(tc1, atan_test_21);
    tcase_add_test(tc1, atan_test_22);
    tcase_add_test(tc1, atan_test_23);
    tcase_add_test(tc1, atan_test_24);
    tcase_add_test(tc1, atan_test_25);
    tcase_add_test(tc1, ceil_test_1);
    tcase_add_test(tc1, ceil_test_2);
    tcase_add_test(tc1, ceil_test_3);
    tcase_add_test(tc1, ceil_test_4);
    tcase_add_test(tc1, ceil_test_5);
    tcase_add_test(tc1, ceil_test_6);
    tcase_add_test(tc1, ceil_test_7);
    tcase_add_test(tc1, ceil_test_8);
    tcase_add_test(tc1, ceil_test_9);
    tcase_add_test(tc1, ceil_test_11);
    tcase_add_test(tc1, ceil_test_12);
    tcase_add_test(tc1, ceil_test_13);
    tcase_add_test(tc1, ceil_test_14);
    tcase_add_test(tc1, ceil_test_15);
    tcase_add_test(tc1, ceil_test_16);
    tcase_add_test(tc1, ceil_test_17);
    tcase_add_test(tc1, cos_test_1);
    tcase_add_test(tc1, cos_test_2);
    tcase_add_test(tc1, cos_test_3);
    tcase_add_test(tc1, cos_test_4);
    tcase_add_test(tc1, cos_test_5);
    tcase_add_test(tc1, cos_test_6);
    tcase_add_test(tc1, cos_test_7);
    tcase_add_test(tc1, cos_test_8);
    tcase_add_test(tc1, cos_test_9);
    tcase_add_test(tc1, cos_test_10);
    tcase_add_test(tc1, cos_test_11);
    tcase_add_test(tc1, cos_test_12);
    tcase_add_test(tc1, cos_test_13);
    tcase_add_test(tc1, cos_test_14);
    tcase_add_test(tc1, cos_test_15);
    tcase_add_test(tc1, cos_test_16);
    tcase_add_test(tc1, cos_test_17);
    tcase_add_test(tc1, cos_test_18);
    tcase_add_test(tc1, cos_test_19);
    tcase_add_test(tc1, cos_test_20);
    tcase_add_test(tc1, cos_test_21);
    tcase_add_test(tc1, exp_test_0);
    tcase_add_test(tc1, exp_test_1);
    tcase_add_test(tc1, exp_test_2);
    tcase_add_test(tc1, exp_test_3);
    tcase_add_test(tc1, exp_test_4);
    tcase_add_test(tc1, exp_test_5);
    tcase_add_test(tc1, exp_test_6);
    tcase_add_test(tc1, exp_test_7);
    tcase_add_test(tc1, exp_test_8);
    tcase_add_test(tc1, exp_test_9);
    tcase_add_test(tc1, exp_test_10);
    tcase_add_test(tc1, exp_test_11);
    tcase_add_test(tc1, exp_test_12);
    tcase_add_test(tc1, exp_test_13);
    tcase_add_test(tc1, exp_test_14);
    tcase_add_test(tc1, exp_test_15);
    tcase_add_test(tc1, exp_test_16);
    tcase_add_test(tc1, exp_test_17);
    tcase_add_test(tc1, exp_test_18);
    tcase_add_test(tc1, exp_test_19);
    tcase_add_test(tc1, exp_test_20);
    tcase_add_test(tc1, exp_test_21);
    tcase_add_test(tc1, exp_test_22);
    tcase_add_test(tc1, exp_test_23);
    tcase_add_test(tc1, exp_test_24);
    tcase_add_test(tc1, exp_test_25);
    tcase_add_test(tc1, exp_test_26);
    tcase_add_test(tc1, exp_test_27);
    tcase_add_test(tc1, exp_test_28);
    tcase_add_test(tc1, exp_test_29);
    tcase_add_test(tc1, exp_test_30);
    tcase_add_test(tc1, exp_test_31);
    tcase_add_test(tc1, exp_test_32);
    tcase_add_test(tc1, exp_test_33);
    tcase_add_test(tc1, fabsl_test_1);
    tcase_add_test(tc1, fabsl_test_2);
    tcase_add_test(tc1, fabsl_test_3);
    tcase_add_test(tc1, fabsl_test_4);
    tcase_add_test(tc1, fabsl_test_5);
    tcase_add_test(tc1, fabsl_test_6);
    tcase_add_test(tc1, fabsl_test_7);
    tcase_add_test(tc1, fabsl_test_8);
    tcase_add_test(tc1, fabsl_test_10);
    tcase_add_test(tc1, fabsl_test_11);
    tcase_add_test(tc1, fabsl_test_12);
    tcase_add_test(tc1, fabsl_test_13);
    tcase_add_test(tc1, fabsl_test_14);
    tcase_add_test(tc1, fabsl_test_15);
    tcase_add_test(tc1, floor_test_1);
    tcase_add_test(tc1, floor_test_2);
    tcase_add_test(tc1, floor_test_3);
    tcase_add_test(tc1, floor_test_4);
    tcase_add_test(tc1, floor_test_5);
    tcase_add_test(tc1, floor_test_6);
    tcase_add_test(tc1, floor_test_7);
    tcase_add_test(tc1, floor_test_8);
    tcase_add_test(tc1, floor_test_10);
    tcase_add_test(tc1, floor_test_11);
    tcase_add_test(tc1, floor_test_12);
    tcase_add_test(tc1, floor_test_13);
    tcase_add_test(tc1, floor_test_14);
    tcase_add_test(tc1, floor_test_15);
    tcase_add_test(tc1, log_test_1);
    tcase_add_test(tc1, log_test_2);
    tcase_add_test(tc1, log_test_3);
    tcase_add_test(tc1, log_test_4);
    tcase_add_test(tc1, log_test_5);
    tcase_add_test(tc1, log_test_6);
    tcase_add_test(tc1, log_test_7);
    tcase_add_test(tc1, log_test_8);
    tcase_add_test(tc1, log_test_9);
    tcase_add_test(tc1, log_test_10);
    tcase_add_test(tc1, log_test_11);
    tcase_add_test(tc1, log_test_12);
    tcase_add_test(tc1, log_test_13);
    tcase_add_test(tc1, log_test_14);
    tcase_add_test(tc1, log_test_15);
    tcase_add_test(tc1, log_test_16);
    tcase_add_test(tc1, log_test_17);
    tcase_add_test(tc1, log_test_18);
    tcase_add_test(tc1, log_test_19);
    tcase_add_test(tc1, log_test_20);
    tcase_add_test(tc1, log_test_21);
    tcase_add_test(tc1, log_test_22);
    tcase_add_test(tc1, log_test_23);
    tcase_add_test(tc1, s21_fmod_test_1);
    tcase_add_test(tc1, s21_fmod_test_2);
    tcase_add_test(tc1, s21_fmod_test_3);
    tcase_add_test(tc1, s21_fmod_test_4);
    tcase_add_test(tc1, s21_fmod_test_5);
    tcase_add_test(tc1, s21_fmod_test_6);
    tcase_add_test(tc1, s21_fmod_test_7);
    tcase_add_test(tc1, s21_fmod_test_8);
    tcase_add_test(tc1, s21_fmod_test_9);
    tcase_add_test(tc1, s21_fmod_test_10);
    tcase_add_test(tc1, s21_fmod_test_11);
    tcase_add_test(tc1, s21_fmod_test_12);
    tcase_add_test(tc1, s21_fmod_test_13);
    tcase_add_test(tc1, s21_fmod_test_14);
    tcase_add_test(tc1, s21_fmod_test_15);
    tcase_add_test(tc1, s21_fmod_test_16);
    tcase_add_test(tc1, s21_fmod_test_17);
    tcase_add_test(tc1, s21_fmod_test_18);
    tcase_add_test(tc1, s21_fmod_test_19);
    tcase_add_test(tc1, s21_fmod_test_20);
    tcase_add_test(tc1, s21_fmod_test_21);
    tcase_add_test(tc1, s21_fmod_test_22);
    tcase_add_test(tc1, s21_fmod_test_23);
    tcase_add_test(tc1, s21_fmod_test_24);
    tcase_add_test(tc1, s21_fmod_test_25);
    tcase_add_test(tc1, s21_fmod_test_26);
    tcase_add_test(tc1, s21_fmod_test_27);
    tcase_add_test(tc1, pow_test_1);
    tcase_add_test(tc1, pow_test_2);
    tcase_add_test(tc1, pow_test_3);
    tcase_add_test(tc1, pow_test_4);
    tcase_add_test(tc1, pow_test_5);
    tcase_add_test(tc1, pow_test_6);
    tcase_add_test(tc1, pow_test_7);
    tcase_add_test(tc1, pow_test_8);
    tcase_add_test(tc1, pow_test_9);
    tcase_add_test(tc1, pow_test_10);
    tcase_add_test(tc1, pow_test_12);
    tcase_add_test(tc1, pow_test_13);
    tcase_add_test(tc1, pow_test_14);
    tcase_add_test(tc1, pow_test_15);
    tcase_add_test(tc1, pow_test_16);
    tcase_add_test(tc1, pow_test_17);
    tcase_add_test(tc1, pow_test_18);
    tcase_add_test(tc1, pow_test_19);
    tcase_add_test(tc1, pow_test_20);
    tcase_add_test(tc1, pow_test_21);
    tcase_add_test(tc1, pow_test_22);
    tcase_add_test(tc1, pow_test_23);
    tcase_add_test(tc1, pow_test_24);
    tcase_add_test(tc1, pow_test_25);
    tcase_add_test(tc1, pow_test_26);
    tcase_add_test(tc1, pow_test_27);
    tcase_add_test(tc1, pow_test_28);
    tcase_add_test(tc1, pow_test_29);
    tcase_add_test(tc1, pow_test_30);
    tcase_add_test(tc1, pow_test_31);
    tcase_add_test(tc1, pow_test_32);
    tcase_add_test(tc1, pow_test_33);
    tcase_add_test(tc1, pow_test_34);
    tcase_add_test(tc1, pow_test_35);
    tcase_add_test(tc1, pow_test_36);
    tcase_add_test(tc1, pow_test_37);
    tcase_add_test(tc1, pow_test_38);
    tcase_add_test(tc1, pow_test_39);
    tcase_add_test(tc1, pow_test_40);
    tcase_add_test(tc1, pow_test_41);
    tcase_add_test(tc1, pow_test_42);
    tcase_add_test(tc1, pow_test_43);
    tcase_add_test(tc1, pow_test_44);
    tcase_add_test(tc1, pow_test_45);
    tcase_add_test(tc1, pow_test_46);
    tcase_add_test(tc1, pow_test_47);
    tcase_add_test(tc1, pow_test_48);
    tcase_add_test(tc1, pow_test_49);
    tcase_add_test(tc1, pow_test_50);
    tcase_add_test(tc1, pow_test_51);
    tcase_add_test(tc1, pow_test_52);
    tcase_add_test(tc1, pow_test_53);
    tcase_add_test(tc1, pow_test_54);
    tcase_add_test(tc1, pow_test_55);
    tcase_add_test(tc1, pow_test_56);
    tcase_add_test(tc1, pow_test_57);
    tcase_add_test(tc1, pow_test_58);
    tcase_add_test(tc1, pow_test_59);
    tcase_add_test(tc1, pow_test_60);
    tcase_add_test(tc1, pow_test_61);
    tcase_add_test(tc1, pow_test_62);
    tcase_add_test(tc1, pow_test_63);
    tcase_add_test(tc1, pow_test_64);
    tcase_add_test(tc1, pow_test_65);
    tcase_add_test(tc1, pow_test_66);
    tcase_add_test(tc1, pow_test_67);
    tcase_add_test(tc1, pow_test_68);
    tcase_add_test(tc1, pow_test_69);
    tcase_add_test(tc1, pow_test_70);
    tcase_add_test(tc1, pow_test_71);
    tcase_add_test(tc1, pow_test_72);
    tcase_add_test(tc1, pow_test_73);
    tcase_add_test(tc1, pow_test_74);
    tcase_add_test(tc1, sin_test_1);
    tcase_add_test(tc1, sin_test_2);
    tcase_add_test(tc1, sin_test_3);
    tcase_add_test(tc1, sin_test_4);
    tcase_add_test(tc1, sin_test_5);
    tcase_add_test(tc1, sin_test_6);
    tcase_add_test(tc1, sin_test_7);
    tcase_add_test(tc1, sin_test_8);
    tcase_add_test(tc1, sin_test_9);
    tcase_add_test(tc1, sin_test_10);
    tcase_add_test(tc1, sin_test_11);
    tcase_add_test(tc1, sin_test_12);
    tcase_add_test(tc1, sin_test_13);
    tcase_add_test(tc1, sin_test_14);
    tcase_add_test(tc1, sin_test_15);
    tcase_add_test(tc1, sin_test_16);
    tcase_add_test(tc1, sin_test_17);
    tcase_add_test(tc1, sin_test_18);
    tcase_add_test(tc1, sin_test_19);
    tcase_add_test(tc1, sin_test_20);
    tcase_add_test(tc1, sin_test_21);
    tcase_add_test(tc1, sin_test_22);
    tcase_add_test(tc1, sin_test_23);
    tcase_add_test(tc1, sin_test_24);
    tcase_add_test(tc1, sin_test_25);
    tcase_add_test(tc1, sqrt_test_1);
    tcase_add_test(tc1, sqrt_test_2);
    tcase_add_test(tc1, sqrt_test_3);
    tcase_add_test(tc1, sqrt_test_4);
    tcase_add_test(tc1, sqrt_test_5);
    tcase_add_test(tc1, sqrt_test_6);
    tcase_add_test(tc1, sqrt_test_7);
    tcase_add_test(tc1, sqrt_test_8);
    tcase_add_test(tc1, sqrt_test_9);
    tcase_add_test(tc1, sqrt_test_10);
    tcase_add_test(tc1, sqrt_test_12);
    tcase_add_test(tc1, sqrt_test_13);
    tcase_add_test(tc1, sqrt_test_14);
    tcase_add_test(tc1, sqrt_test_15);
    tcase_add_test(tc1, sqrt_test_16);
    tcase_add_test(tc1, tan_test_1);
    tcase_add_test(tc1, tan_test_2);
    tcase_add_test(tc1, tan_test_3);
    tcase_add_test(tc1, tan_test_4);
    tcase_add_test(tc1, tan_test_5);
    tcase_add_test(tc1, tan_test_6);
    tcase_add_test(tc1, tan_test_7);
    tcase_add_test(tc1, tan_test_8);
    tcase_add_test(tc1, tan_test_9);
    tcase_add_test(tc1, tan_test_10);
    tcase_add_test(tc1, tan_test_11);
    tcase_add_test(tc1, tan_test_12);
    tcase_add_test(tc1, tan_test_13);
    tcase_add_test(tc1, tan_test_14);
    tcase_add_test(tc1, tan_test_15);
    tcase_add_test(tc1, tan_test_16);
    tcase_add_test(tc1, tan_test_17);
    tcase_add_test(tc1, tan_test_18);
    tcase_add_test(tc1, tan_test_19);
    tcase_add_test(tc1, tan_test_20);
    tcase_add_test(tc1, tan_test_21);
    tcase_add_test(tc1, tan_test_22);
    tcase_add_test(tc1, tan_test_23);

    srunner_run_all(sr,  CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
