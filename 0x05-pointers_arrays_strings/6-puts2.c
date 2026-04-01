#include "main.h"

/**
 * puts2 - prints every other character of a string followed by a new line
 * @str: pointer to the string to be printed
 */
void puts2(char *str)
{
int i;

while (*str)
{
if (i % 2 == 0)
_putchar(*str);
str++;
i++;
}

_putchar('\n');
}
