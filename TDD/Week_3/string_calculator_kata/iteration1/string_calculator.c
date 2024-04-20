#include <stdio.h>
#include <string.h>

#include "string_calculator.h"

static int is_separator(char c)
{
    return c == ',' || c == '\n';
}

int Add(const char *string)
{
    int number = 0;
    int sum = 0;
    int len = strlen(string);
    int i;

    for(i = 0 ; i < len ; i++) {
        if(!is_separator(string[i]) && sscanf(&string[i], "%d", &number))
            sum += number;
    }

    return sum;
}
