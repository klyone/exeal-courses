#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <setjmp.h>
#include <cmocka.h>

/**
 *
 * This is a dummy test to ensure that the cmocka is properly configured
 *
 **/
static void test_cmocka_is_properly_configured(void **state) {
}

// TODO: Implement the basic Add method with no numbers
static void add_with_empty_string_is_zero(void **state) {
    assert_int_equal(Add(""), 0);
}

// TODO: Implement the basic Add method with one number
// TODO: Implement the basic Add method with two numbers

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_cmocka_is_properly_configured),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}
