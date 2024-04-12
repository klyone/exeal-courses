#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <setjmp.h>
#include <cmocka.h>

#include "leap_year.h"

static void test_cmocka_setup(void **state) {
}

static void test_400_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(400), 1);
}

static void test_800_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(800), 1);
}

static void test_2400_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(2400), 1);
}

static void test_100_no_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(100), 0);
}

static void test_1000_no_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(1000), 0);
}

static void test_96_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(96), 1);
}

static void test_196_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(196), 1);
}

static void test_360_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(360), 1);
}

static void test_361_no_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(361), 0);
}

static void test_555_no_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(555), 0);
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_cmocka_setup),
        cmocka_unit_test(test_400_is_leap_year),
        cmocka_unit_test(test_800_is_leap_year),
        cmocka_unit_test(test_2400_is_leap_year),
        cmocka_unit_test(test_100_no_is_leap_year),
        cmocka_unit_test(test_1000_no_is_leap_year),
        cmocka_unit_test(test_96_is_leap_year),
        cmocka_unit_test(test_196_is_leap_year),
        cmocka_unit_test(test_360_is_leap_year),
        cmocka_unit_test(test_361_no_is_leap_year),
        cmocka_unit_test(test_555_no_is_leap_year),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}
