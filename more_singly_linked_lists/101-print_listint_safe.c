#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely (handles loops).
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current = head;
const listint_t *runner;
size_t index;

while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;

/* Move to next node */
current = current->next;

/* Check if the next node has already been visited */
runner = head;
index = 0;
while (index < count)
{
if (current == runner)
{
/* Loop detected! Print the address it loops back to and exit */
printf("-> [%p] %d\n", (void *)current, current->n);
return (count);
}
runner = runner->next;
index++;
}
}

return (count);
}
