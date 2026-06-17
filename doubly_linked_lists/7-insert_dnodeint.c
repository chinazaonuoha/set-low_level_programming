#include "lists.h"
#include <stdlib.h>


/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a
 * doubly linked list
 * @h: Double pointer to the head of the list
 * @idx: Index at which the new node should be inserted (starting from 0)
 * @n: Integer data for the new node
 *
 * Return: Pointer to the new node, or NULL if allocation fails or index is out
 * of bounds
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int i;
if (h == NULL)
return (NULL);
if (idx == 0)
return (add_dnodeint(h, n));
current = *h;
for (i = 0; current != NULL && i < idx - 1; i++)
current = current->next;
if (current == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = current;
new_node->next = current->next;
if (current->next != NULL)
current->next->prev = new_node;
current->next = new_node;
return (new_node);
}
