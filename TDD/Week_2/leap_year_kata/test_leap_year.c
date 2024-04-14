#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <setjmp.h>
#include <cmocka.h>

int is_leap_year(unsigned int year) {
    return 1;
}

/**
 *
 * This is a dummy test to ensure that the cmocka is properly configured
 *
 **/
static void test_cmocka_is_properly_configured(void **state) {
}

static void test_400_is_leap_year(void **state)
{
    assert_int_equal(is_leap_year(400), 1);
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_cmocka_is_properly_configured),
        cmocka_unit_test(test_400_is_leap_year),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}