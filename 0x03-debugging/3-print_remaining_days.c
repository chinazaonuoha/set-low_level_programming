#include <stdio.h>
#include "main.h"

/**
 * is_leap_year - checks if a year is leap
 * @year: year to check
 * Return: 1 if leap, 0 otherwise
 */
int is_leap_year(int year)
{
/* Leap year: divisible by 4 and (not divisible by 100 or divisible by 400) */
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
return (1);
return (0);
}

/**
 * print_remaining_days - prints day of year and remaining days
 * @month: month (1-12)
 * @day: day of month (1-31)
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
int day_of_year;

/* Feb 29 in non-leap year is invalid */
if (month == 2 && day == 29 && !is_leap_year(year))
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

/* Convert month/day to day-of-year (non-leap year) */
day_of_year = convert_day(month, day);

/* If leap year and date after Feb, add 1 */
if (is_leap_year(year) && month > 2)
day_of_year += 1;

printf("Day of the year: %d\n", day_of_year);

if (is_leap_year(year))
printf("Remaining days: %d\n", 366 - day_of_year);
else
printf("Remaining days: %d\n", 365 - day_of_year);
}
