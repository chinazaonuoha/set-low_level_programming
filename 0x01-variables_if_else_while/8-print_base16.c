#include <stdio.h>

/**
*main - Entry Point
*
*Return: 0 Always(success)
*/

int main(void)
{
/* display only lowercase character */
int number_base_16 = 0;
while (number_base_16 < 16)
{
putchar(number_base_16 + '0' + (number_base_16 > 9) * 39);
number_base_16++;
}
putchar('\n');
return (0);
}
