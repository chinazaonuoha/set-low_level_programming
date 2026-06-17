#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stddef.h>

/**
 * struct dlistint_s - Doubly linked list node structure
 * @n: Integer data stored in the node
 * @prev: Pointer to the previous node in the list
 * @next: Pointer to the next node in the list
 *
 * Description: This structure represents a node in a doubly linked list.
 */
typedef struct dlistint_s
{
int n;
struct dlistint_s *prev;
struct dlistint_s *next;
} dlistint_t;

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h);

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h);

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: Double pointer to the head of the list
 * @n: Integer data for the new node
 *
 * Return: Pointer to the new node, or NULL if allocation fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Double pointer to the head of the list
 * @n: Integer data for the new node
 *
 * Return: Pointer to the new node, or NULL if allocation fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
/**
 * free_dlistint - Frees all nodes in a doubly linked list
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head);

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to retrieve (starting from 0)
 *
 * Return: Pointer to the nth node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * sum_dlistint - Calculates the sum of all the data (n) in a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the data in the list
 */
int sum_dlistint(dlistint_t *head);
#endif /* LISTS_H */
