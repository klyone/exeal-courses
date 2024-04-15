#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "string_calculator.h"

int add(const char *numbers)
{
    char *tmp = calloc(strlen(numbers), sizeof(char));
    strncpy(tmp, numbers, strlen(numbers));

    char *n = strtok(tmp, ",\n");
    int sum = 0;

    while (n != NULL) {
       int number = strtol(n, NULL, 0);
       sum += number;
       n = strtok(NULL, ",\n");
    }

    free(tmp);

    return sum;
}
