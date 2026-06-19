#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to a pointer to the head of the listint_t linked list.
 * @idx: index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
listint_t *current, *temp;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

if (idx == 0)
{
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

current = *head;
for (i = 0; i < idx - 1 && current != NULL; i++)
current = current->next;

if (current == NULL || current->next == NULL)
return (-1);

temp = current->next;
current->next = current->next->next;
free(temp);
return (1);
}
