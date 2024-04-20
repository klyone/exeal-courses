#include <stdio.h>

#include "string_calculator.h"

int Add(const char *string)
{
    int number;

    sscanf(string, "%d", &number);

    return number;
}
