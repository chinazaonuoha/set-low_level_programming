#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to check
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;

last_digit = abs(n) % 10;
_putchar('0' + last_digit);
return (last_digit);
}
