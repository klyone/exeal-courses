#include <stdio.h>
#include <string.h>

#include "string_calculator.h"

int Add(const char *string)
{
    int number = 0;
    int sum = 0;
    int len = strlen(string);
    int i;

    for(i = 0 ; i < len ; i++) {
        if(string[i] != ',' && string[i] != '\n' && sscanf(&string[i], "%d", &number))
            sum += number;
    }

    return sum;
}
