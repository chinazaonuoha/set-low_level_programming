#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string contains only digits
 * @str: input string
 * Return: 1 if valid number, 0 otherwise
 */
int is_number(char *str)
{
int i = 0;

if (str[0] == '\0')
return (0);

while (str[i])
{
if (!isdigit(str[i]))
return (0);
i++;
}
return (1);
}

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

for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}

sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}

