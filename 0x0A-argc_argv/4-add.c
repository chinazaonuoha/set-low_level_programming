#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds all numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc < 2)
{
printf("Error\n");
return (1);
}

i = 1;
while (i < argc)
{
sum += atoi(argv[i]);
i++;
}

printf("%d\n", sum);
return (0);
}
