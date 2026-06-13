#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the head of the list
 * @n: string to be added
 * Return: pointer to the new node, or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *n)
{
list_t *new_node;
list_t *current;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(n);
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
return (new_node);
}

