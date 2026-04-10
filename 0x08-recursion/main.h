#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - writes a character to stdout
 * @c: the character to be printed
 *
 * Return: On success, the character printed is returned. On error, EOF is returned.
 */
int _putchar(char c);

/**
 * memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory with
 * @n: the number of bytes to be filled 
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: the number of bytes to be copied
 *
 * Return: pointer to the destination memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to be searched
 * @c: the character to be located
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c);

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to be accepted
 *
 * Return: the number of characters in the
 * initial segment of s which are also in accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to be searched for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
 char *_strpbrk(char *s, char *accept);

 /**
 * _strstr - locates a substring
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to be located
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */ 
 char *_strstr(char *haystack, char *needle);

 /** print_chessboard - prints the chessboard
 * @a: pointer to a 2D array representing the chessboard
 */
 void print_chessboard(char (*a)[8]);

/** print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: pointer to the first element of the matrix
 * @size: the size of the matrix
 */
 void print_diagsums(int *a, int size);



/** _puts_recursion - prints a string followed by a new line
 * @s: pointer to the string to be printed
 */
 void _puts_recursion(char *s);

/** _print_rev_recursion - prints a string in reverse followed by a new line
 * @s: pointer to the string to be printed
 */ void _print_rev_recursion(char *s);

 int _strlen_recursion(char *s);

#endif /* MAIN_H */ 