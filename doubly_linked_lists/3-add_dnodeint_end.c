#include "lists.h"
#include <stdlib.h>


/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Double pointer to the head of the list
 * @n: Integer data for the new node
 *
 * Return: Pointer to the new node, or NULL if allocation fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *current;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

current = *head;
while (current->next != NULL)
current = current->next;

current->next = new_node;
new_node->prev = current;

return (new_node);
}
