#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string by allocating memory and copying the content
 * @str: The string to duplicate
 * Return: A pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
char *dup;
char *p;
int len = 0;

if (str == NULL)
return (NULL);

while (str[len])
len++;

dup = malloc(len + 1);

if (!dup)
return (NULL);

p = dup;

while (*str)
{
*p = *str;
p++;
str++;
}

*p = '\0';

return (dup);
}
