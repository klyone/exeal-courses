#include "leap_year.h"

int is_leap_year(unsigned int year)
{
    if (year == 400)
        return TRUE;
    else
        return FALSE;
}
