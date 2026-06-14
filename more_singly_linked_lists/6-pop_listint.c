#include "lists.h"
#include <stdlib.h>


/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the head node’s data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (!head || !*head)
return (0);

temp = *head;
*head = (*head)->next;
n = temp->n;
free(temp);
return (n);
}
