#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <setjmp.h>
#include <cmocka.h>

#include "leap_year.h"

static void test_cmocka_setup(void **state) {
}

int main(void) {
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_cmocka_setup),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}
