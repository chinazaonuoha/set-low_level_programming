#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes
 * each and initializes it to zero.
 * @nmemb: The number of elements to allocate
 * @size: The size of each element in bytes
 *
 * Return: A pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
char *filler;
unsigned int total_size, i;

/* Handle edge cases where number of elements or size is 0 */
if (nmemb == 0 || size == 0)
return (NULL);

/* Calculate total bytes to allocate */
total_size = nmemb * size;

/* Allocate memory block */
ptr = malloc(total_size);
if (ptr == NULL)
{
return (NULL);
}
/* Manually zero-out the memory byte-by-byte */
filler = (char *)ptr;
for (i = 0; i < total_size; i++)
{
filler[i] = 0;
}
return (ptr);
}
