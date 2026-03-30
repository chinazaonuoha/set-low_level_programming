#ifndef MAIN_H
#define MAIN_H

/**
 * reset_to_98 - resets the value of an integer to 98
 * @n: pointer to the integer to be reset
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *s);

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to be printed
 */
void _puts(char *str);

#endif /* MAIN_H */