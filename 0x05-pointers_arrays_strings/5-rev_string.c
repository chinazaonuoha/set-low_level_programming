#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 */
void rev_string(char *s)
{int i = 0, j = 0;
char temp;
while (s[i])
i++;
j = i - 1;
i = 0;
while (i < j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
}
