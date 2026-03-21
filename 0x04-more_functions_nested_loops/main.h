#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 */
int _putchar(char c);

/**
 * _isupper - checks if a character is uppercase
 * @c: The character to check
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - checks if a character is a digit
 * @c: The character to check
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: The first integer
 * @b: The second integer
 * Return: The product of a and b
 */
int mul(int a, int b);

/**
 * print_numbers - prints the numbers from 0 to 9
 */
void print_numbers(void);

/**
 * print_most_numbers - prints the numbers from 0 to 9 except 2 and 4
 */
void print_most_numbers(void);

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void);

/**
 * print_line - prints a line of length n
 * @n: The length of the line to print
 */
void print_line(int n);

/**
 * print_diagonal - prints a diagonal line of length n
 * @n: The length of the diagonal to print
 */
void print_diagonal(int n);
#endif