#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <setjmp.h>
#include <cmocka.h>

#include "string_calculator.h"

/**
 *
 * This is a dummy test to ensure that the cmocka is properly configured
 *
 **/
static void test_cmocka_is_properly_configured(void **state) {
}

static void add_with_empty_string_is_zero(void **state) {
    assert_int_equal(Add(""), 0);
}

static void add_a_string_with_one_number_return_this_number(void **state) {
    assert_int_equal(Add("3"), 3);
}

static void add_a_string_with_two_number_return_the_sum(void **state) {
    assert_int_equal(Add("3,5"), 8);
}

// TODO: Handle more than two numbers in the string
static void add_a_string_with_several_number_return_the_sum(void **state) {
    assert_int_equal(Add("3,5,7"), 15);
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_cmocka_is_properly_configured),
        cmocka_unit_test(add_with_empty_string_is_zero),
        cmocka_unit_test(add_a_string_with_one_number_return_this_number),
        cmocka_unit_test(add_a_string_with_two_number_return_the_sum),
        cmocka_unit_test(add_a_string_with_several_number_return_the_sum),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}
