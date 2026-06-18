#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: pointer to the head of the listint_t linked list
 * Return: the sum of all the data (n) of a listint_t
 * linked list, or 0 if the list is empty
 */

int sum_listint(list_t *head)
{
int sum = 0;
list_t *current = head;

while (current != NULL)
{
sum += current->len;
current = current->next;
}

return (sum);
}
