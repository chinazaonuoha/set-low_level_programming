#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to be concatenated upon
 * @src: string to concatenate to dest
 * @n: number of bytes from src to concatenate to dest
 *
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
while (dest[i] != '\0')
i++;

j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';

return (dest);
}
