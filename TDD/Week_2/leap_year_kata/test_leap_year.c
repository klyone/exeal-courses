#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <setjmp.h>
#include <cmocka.h>

#include "leap_year.h"

/**
 *
 * This is a dummy test to ensure that the cmocka is properly configured
 *
 **/
static void test_cmocka_is_properly_configured(void **state) {
}

static void test_400_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(400), TRUE);
}

static void test_100_is_no_leap_year(void **state)
{
    assert_int_equal(is_leap_year(100), FALSE);
}

static void test_800_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(800), TRUE);
}

static void test_1200_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(1200), TRUE);
}

static void test_4_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(4), TRUE);
}

static void test_120_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(120), TRUE);
}

static void test_360_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(360), TRUE);
}


int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_cmocka_is_properly_configured),
        cmocka_unit_test(test_400_is_leap_year),
        cmocka_unit_test(test_100_is_no_leap_year),
        cmocka_unit_test(test_800_is_leap_year),
        cmocka_unit_test(test_1200_is_leap_year),
        cmocka_unit_test(test_4_is_leap_year),
        cmocka_unit_test(test_120_is_leap_year),
        cmocka_unit_test(test_360_is_leap_year),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}
