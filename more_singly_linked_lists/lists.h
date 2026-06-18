#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the head of the listint_t linked list
 * Return: the sum of all the data (n) of a listint_t linked list, or 0 if the list is empty
 */
int sum_listint(list_t *head);


/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: pointer to a pointer to the head of the listint_t list.
 */
void free_listint2(list_t **head);


/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to a pointer to the head of the listint_t list.
 * @n: integer to be added to the new node.
 *
 * Return: a pointer to the new node.
 */
list_t *add_nodeint_end(list_t **head, const int n);

#endif /* LISTS_H */
