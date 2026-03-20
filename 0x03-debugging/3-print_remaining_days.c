#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints day of year and remaining days
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
int day_of_year;

/* Check for invalid Feb 29 in non-leap years */
if (month == 2 && day == 29 && !((year % 4 == 0 && year % 100 != 0) ||
                            (year % 400 == 0)))
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

/* Convert month/day to day-of-year (ignoring leap year) */
day_of_year = convert_day(month, day);

/* If leap year and date is after Feb, add 1 for Feb 29 */
if (((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) &&
month > 2)
{
day_of_year += 1;
}

/* Print results */
printf("Day of the year: %d\n", day_of_year);

if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
printf("Remaining days: %d\n", 366 - day_of_year);
else
printf("Remaining days: %d\n", 365 - day_of_year);
}