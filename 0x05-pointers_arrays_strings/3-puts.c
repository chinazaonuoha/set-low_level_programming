#include "main.h"
#include <unistd.h>

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to be printed
 * 
 * Return: void
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
i++;

write(1, str, i);
write(1, "\n", 1);
}
