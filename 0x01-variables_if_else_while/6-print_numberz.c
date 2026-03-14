#include <stdio.h>

/**
*main - Entry Point
*
*Return: 0 Always(success)
*/

int main(void)
{
/* display only lowercase character */
int number_base_10 = 0;
while (number_base_10 < 10)
{
putchar(number_base_10 + '0');
number_base_10++;
}
putchar('\n');
return (0);
}
