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
int len;

if (str == NULL)
return (NULL);

len = strlen(str);
dup = malloc((len + 1) * sizeof(char));

if (dup == NULL)
return (NULL);

strcpy(dup, str);
return (dup);
}
