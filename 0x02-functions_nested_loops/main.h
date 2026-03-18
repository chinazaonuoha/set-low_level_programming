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
#endif
