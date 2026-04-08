#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to be accepted
 *
 * Return: the number of characters in the
 * initial segment of s which are also in accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
{
count++;
break;
}
a++;
}
if (*a == '\0')
{
break;
}
s++;
}
return (count);
}

