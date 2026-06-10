#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - Allocates memory using malloc and c
 * hecks for successful allocation
 * @b: The size of memory to allocate in bytes
 * Return: A pointer to the allocated memory, or
 * exits with status 98 on failure
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
