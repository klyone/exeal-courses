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

static void test_empty_string_should_sum_zero(void **state) {
    assert_int_equal(add(""), 0);
}

static void test_one_number_string_should_sum_same_number(void **state) {
    assert_int_equal(add("3"), 3);
}

static void test_two_numbers_string_should_add_both_number(void **state) {
    assert_int_equal(add("3,4"), 7);
}

static void test_three_numbers_string_should_add_all(void **state) {
    assert_int_equal(add("3,4,4"), 11);
}

static void test_many_numbers_string_should_add_all(void **state) {
    assert_int_equal(add("1,1,1,2,2,2,3,3,3,6,6,6,7,7,7,8,8,8"), 81);
}

static void test_end_of_line_sep_with_commas(void **state) {
    assert_int_equal(add("1,5\n6"), 12);
}

static void test_custom_separator(void **state) {
    assert_int_equal(add("//@\n1@5@6"), 12);
}

static void test_custom_separator2(void **state) {
    assert_int_equal(add("//&\n1&55&66"), 122);
}

static void test_ignore_negative_values(void **state) {
    assert_int_equal(add("1,2,3,4,-5,6,8,-7"), 24);
}


int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_cmocka_is_properly_configured),
        cmocka_unit_test(test_empty_string_should_sum_zero),
        cmocka_unit_test(test_one_number_string_should_sum_same_number),
        cmocka_unit_test(test_two_numbers_string_should_add_both_number),
        cmocka_unit_test(test_three_numbers_string_should_add_all),
        cmocka_unit_test(test_many_numbers_string_should_add_all),
        cmocka_unit_test(test_end_of_line_sep_with_commas),
        cmocka_unit_test(test_custom_separator),
        cmocka_unit_test(test_custom_separator2),
        cmocka_unit_test(test_ignore_negative_values),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}
