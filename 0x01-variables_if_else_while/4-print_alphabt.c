#include <stdio.h>

/**
*main - Entry Point
*
*Return: 0 Always(success)
*/

int main(void)
{
/* display only lowercase character */
char lowercase_char = 'a';
while (lowercase_char <= 'z')
{

if (lowercase_char != 'e' && lowercase_char != 'q')
{
putchar(lowercase_char);
}
lowercase_char++;
}
putchar('\n');

return (0);
}
