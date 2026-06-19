#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely (handles loops).
 * @h: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: The number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current;
listint_t *next;

if (h == NULL || *h == NULL)
return (0);

current = *h;
while (current != NULL)
{
/* Direct evaluation: Is the next node behind or equal to us in memory? */
if (current <= current->next)
{
/* Loop detected! Free this final node and stop immediately */
free(current);
count++;
break;
}

/* Normal linear processing */
next = current->next;
free(current);
count++;
current = next;
}

*h = NULL; /* Set the original head pointer to NULL */
return (count);
}