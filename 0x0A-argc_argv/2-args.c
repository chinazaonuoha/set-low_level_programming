#include <stdio.h>

/**
 * main - prints the arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;

for (i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
