#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * Return: pointer to the destination buffer
 */

char *_strcat(char *dest, char *src)
{
char *temp = dest;

while (*dest)
dest++;
while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (temp);
}

