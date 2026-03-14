#include <stdio.h>

/**
*main - Entry Point
*
*Return: 0 Always(success)
*/

int main(void)
{
/* display only possible_combination */
int possible_combination = 0;
while (possible_combination < 10)
{
if (possible_combination > 0)
{
putchar(',');
putchar(' ');
}
putchar(possible_combination + '0');
possible_combination++;
}
putchar('\n');
return (0);
}
