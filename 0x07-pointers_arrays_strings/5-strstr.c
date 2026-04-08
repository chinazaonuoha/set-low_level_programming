#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to be located
 *
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
char *h;
char *n;

if (!needle)
return (NULL);

while (*haystack)
{
h = haystack;
n = needle;

while (*n && *h == *n)
{
h++;
n++;
}

if (!*n)
return (haystack);

haystack++;
}

return (NULL);
}
