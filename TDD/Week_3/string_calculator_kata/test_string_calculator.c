#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <setjmp.h>
#include <cmocka.h>

static int add(const char *numbers)
{
    return 0;
}

/**
 *
 * This is a dummy test to ensure that the cmocka is properly configured
 *
 **/
static void test_cmocka_is_properly_configured(void **state) {
}

static void test_empty_string_should_sum_zero(void **state) {
    assert_int_equal(add(""), 0);
}

static void test_one_number_string_should_sum_same_number(void **state) {
    assert_int_equal(add("3"), 3);
}


int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_cmocka_is_properly_configured),
        cmocka_unit_test(test_empty_string_should_sum_zero),
        cmocka_unit_test(test_one_number_string_should_sum_same_number),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}
