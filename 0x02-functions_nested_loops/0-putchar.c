#include "main.h"

/**
*main - entry point to the program
*
*Return: On success 1.
*
*
*/
int main(void)
{
int count = 0;
char str[] = "_putchar";

while (str[count] != '\0')
{
_putchar(str[count]);
count++;
}
_putchar('\n');
return (0);
}
