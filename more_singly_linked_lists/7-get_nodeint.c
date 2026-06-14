#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first element in the linked list
 * @index: index of the node to retrieve (starting at 0)
 *
 * Return: the nth node, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *current;

if (!head)
return (NULL);

current = head;
for (i = 0; i < index; i++)
{
if (!current)
return (NULL);
current = current->next;
}
return (current);
}

