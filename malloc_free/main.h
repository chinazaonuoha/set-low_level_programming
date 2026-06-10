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

/**
 * alloc_grid - Allocates a 2D array of integers (grid) with specified width and height
 * @width: The width of the grid (number of columns)
 * @height: The height of the grid (number of rows)
 * Return: A pointer to the allocated grid, or NULL on failure
 */
int **alloc_grid(int width, int height);

/**
 * free_grid - Frees a 2D array of integers (grid) previously allocated by alloc_grid
 * @grid: The pointer to the grid to free
 * @height: The height of the grid (number of rows)
 * Return: Nothing.
 */
void free_grid(int **grid, int height);
#endif /* MAIN_H */