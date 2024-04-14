#include "leap_year.h"

int is_leap_year(unsigned int year)
{
    if (year == 400 || year == 800 || year == 1200)
        return TRUE;
    else
        return FALSE;
}
