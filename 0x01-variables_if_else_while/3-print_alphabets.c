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
char uppercase_char = 'A';
while (lowercase_char <= 'z')
{
putchar(lowercase_char);
lowercase_char++;
}


while (uppercase_char <= 'Z')
{
putchar(uppercase_char);
uppercase_char++;
}
putchar('\n');

return (0);
}
