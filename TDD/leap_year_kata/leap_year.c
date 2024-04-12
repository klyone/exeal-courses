int is_leap_year(unsigned int year)
{
    if (year % 400 == 0)
        return 1;
    if (year % 4 == 0 && year % 100 != 0)
        return 1;
    return 0;
}
