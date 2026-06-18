#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>


typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the head of the listint_t linked list
 * Return: the sum of all the data (n) of a listint_t linked list, or 0 if the list is empty
 */
int sum_listint(listint_t *head);


/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: pointer to a pointer to the head of the listint_t list.
 */
void free_listint2(listint_t **head);


/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to a pointer to the head of the listint_t list.
 * @n: integer to be added to the new node.
 *
 * Return: a pointer to the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

#endif /* LISTS_H */
