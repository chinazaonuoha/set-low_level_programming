#include <stdio.h>

/**
*main - Entry Point
*
*Return: 0 Always(success)
*/

int main(void)
{
/* display only lowercase character in reverse */
char lowercase_char = 'z';
while (lowercase_char >= 'a')
{
putchar(lowercase_char);
lowercase_char--;
}
putchar('\n');

return (0);
}
