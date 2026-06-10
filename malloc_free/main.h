#ifndef MAIN_H
#define MAIN_H

/**
 * create_array - Creates an array of characters and initializes it with a specific character
 * @size: The size of the array to create
 * @c: The character to initialize each element with
 * Return: A pointer to the created array, or NULL on failure
 */
char *create_array(unsigned int size, char c);


/**
 * _strdup - Duplicates a string by allocating memory and copying the content
 * @str: The string to duplicate
 * Return: A pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str);

/**
 * str_concat - Concatenates two strings by allocating memory and copying the content
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2);
#endif /* MAIN_H */