#include <stdio.h>

#include "string_calculator.h"

int Add(const char *string)
{
    int number = 0;
    int number2 = 0;
    int number3 = 0;

    sscanf(string, "%d,%d,%d", &number, &number2, &number3);

    return number + number2 + number3;
}
