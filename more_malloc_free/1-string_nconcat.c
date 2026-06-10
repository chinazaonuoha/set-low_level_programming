#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings,
 * but only up to n bytes of the second string
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate (up to n bytes)
 * @n: The maximum number of bytes to concatenate from s2
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1 = 0, len2 = 0;
unsigned int i, j;
/* Treat NULL inputs as empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/* Manually calculate length of s1 */
while (s1[len1] != '\0')
len1++;
/* Manually calculate length of s2 */
while (s2[len2] != '\0')
len2++;
/* If n is greater than or equal to the length of s2, use entire s2 */
if (n >= len2)
n = len2;
/* Allocate memory for s1, n bytes of s2, and the null terminator */
concat = malloc(sizeof(char) * (len1 + n + 1));
if (concat == NULL)
return (NULL);
/* Copy s1 into the new buffer */
for (i = 0; i < len1; i++)
{
concat[i] = s1[i];
}
/* Copy up to n bytes of s2 into the new buffer */
for (j = 0; j < n; j++)
{
concat[i + j] = s2[j];
}
/* Append the null terminator */
concat[i + j] = '\0';
return (concat);
}
