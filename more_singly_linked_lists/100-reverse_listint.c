#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to a pointer to the head of the listint_t list.
 *
 * Return: pointer to the first node of the reversed listint_t list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;
listint_t *next = NULL;

while (current != NULL)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}
*head = prev;
return (*head);
}
