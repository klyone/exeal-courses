#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "string_calculator.h"

int add(const char *numbers)
{
    char *tmp = calloc(strlen(numbers), sizeof(char));
    char sep[10];

    strncpy(tmp, numbers, strlen(numbers));
    strncpy(sep, ",\n", 4);

    if (tmp[0] == '/' && tmp[1] == '/') {
        sep[0] = tmp[2];
        sep[1] = 0;
    }

    char *n = strtok(tmp, sep);
    int sum = 0;

    while (n != NULL) {
       int number = strtol(n, NULL, 0);
       sum += number;
       n = strtok(NULL, sep);
    }

    free(tmp);

    return sum;
}
