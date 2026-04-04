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

/**
 * puts_half - prints half of a string followed by a new line
 * @str: pointer to the string to be printed
 */
void puts_half(char *str);

/**
 * print_array - prints n elements of an array of integers followed by a new line
 * @a: pointer to the first element of the array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n);

/**
 * _strcpy - copies a string from source to destination
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src);



/**strcat - concatenates two strings
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * Return: pointer to the destination buffer
 */
 char *_strcat(char *dest, char *src);

 /**
  * _strncat - concatenates two strings with a limit on the number of characters
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: maximum number of characters to be concatenated from src
 * Return: pointer to the destination buffer
 */
 char *_strncat(char *dest, char *src, int n);

 /**
  * _strncpy - copies a string from source to destination with a limit on the number of characters
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * @n: maximum number of characters to be copied from src
 * Return: pointer to the destination buffer
 */
  char *_strncpy(char *dest, char *src, int n);

  /**
   * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2
 */
  int _strcmp(char *s1, char *s2);

  /** * reverse_array - reverses the content of an array of integers
 * @a: pointer to the first element of the array
 * @n: number of elements in the array
 */
   void reverse_array(int *a, int n);

   /**
    * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the string to be modified
 * Return: pointer to the modified string
 */ 

   char *string_toupper(char *);

   /**
    * cap_string - capitalizes all words of a string
 * @str: pointer to the string to be modified
 * Return: pointer to the modified string
 */
   char *cap_string(char *);

   /**
    * leet - encodes a string into 1337
 * @str: pointer to the string to be encoded
 * Return: pointer to the encoded string
 */
   char *leet(char *);

#endif /* MAIN_H */