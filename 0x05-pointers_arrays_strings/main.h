#ifndef MAIN_H
#define MAIN_H


/* _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
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

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string to be printed in reverse
 */
void print_rev(char *s);

/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 */
void rev_string(char *s);

/**
 * puts2 - prints every other character of a string followed by a new line
 * @str: pointer to the string to be printed
 */
void puts2(char *str);

#endif /* MAIN_H */