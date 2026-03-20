#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - prints a character to the console
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _putchar(char c);

/**
 * print_alphabet - prints the alphabet in lowercase
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise
 */
int _isalpha(int c);

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 if n is greater than 0, 0 if n is 0, -1 if n is less than 0
 */
int print_sign(int n);

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to compute
 *
 * Return: the absolute value of n
 */
int _abs(int);

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to check
 *
 * Return: the value of the last digit
 */
int print_last_digit(int);

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void);

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void);

/**
 * add - adds two integers and returns the result
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of a and b
 */
int add(int, int);

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the starting number
 */
void print_to_98(int n);

void positive_or_negative(int i);

/**
 * largest_number - returns the largest of 3 integers
 * @a: the first integer
 * @b: the second integer
 * @c: the third integer
 *
 * Return: the largest of a, b, and c
 */
int largest_number(int a, int b, int c);

/**
 * convert_day - converts day of month to day of year, without accounting
 * for leap year
 * @month: month in number format
 * @day: day of month
 * Return: day of year
 */
int convert_day(int month, int day);

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year);
#endif
