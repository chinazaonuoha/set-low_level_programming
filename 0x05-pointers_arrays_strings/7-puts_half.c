#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string followed by a new line
 * @str: pointer to the string to be printed
 */
void puts_half(char *str)
{

int len = strlen(str);
int start;

if (len % 2 == 0)
start = len / 2;
else
start = (len / 2) + 1;

while (*(str + start))
{
_putchar(*(str + start));
start++;
}

_putchar('\n');
}
