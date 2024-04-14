#include "leap_year.h"

int is_leap_year(unsigned int year)
{
    return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) ? TRUE : FALSE;
}
