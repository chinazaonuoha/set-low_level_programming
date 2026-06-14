#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */

typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the head of the listint_t list.
 *
 * Return: the number of elements in the listint_t list.
 */

size_t listint_len(const listint_t *h);

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to a pointer to the head of the listint_t list.
 * @n: integer to be added to the new node.
 *
 * Return: a pointer to the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to a pointer to the head of the listint_t list.
 * @n: integer to be added to the new node.
 *
 * Return: a pointer to the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head of the listint_t list.
 */
void free_listint(listint_t *head);

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n).
 * @head: pointer to a pointer to the head of the listint_t list.
 *
 * Return: the head node’s data (n). If the linked list is empty return 0.
 */
int pop_listint(listint_t **head);

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the listint_t list.
 * @index: index of the node, starting at 0.
 *
 * Return: pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/**
 * sum_listint - returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: the sum of all the data (n) of a listint_t linked list. If the
 * list is empty, return 0.
 */
int sum_listint(listint_t *head);

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to a pointer to the head of the listint_t list.
 * @idx: index of the list where the new node
 * should be added. Index starts at 0.
 * @n: integer to be added to the new node.
 *
 * Return: pointer to the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list.
 * @head: pointer to a pointer to the head of the listint_t list.
 * @index: index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif /* LISTS_H */
