#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - calculates the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to the head of the listint_t linked list.
 *
 * Return: the sum of all the data (n) of the listint_t linked list.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}
