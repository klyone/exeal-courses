#include <stdio.h>

#include "string_calculator.h"

int Add(const char *string)
{
    int number = 0;
    int number2 = 0;

    sscanf(string, "%d,%d", &number, &number2);

    return number + number2;
}
