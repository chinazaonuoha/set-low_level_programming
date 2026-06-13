#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string (malloc'ed string)
 * @len: length of the string
 * @next: points to next node
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
 * print_list - prints all elements of a linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h);


/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h);
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the head of the list
 * @str: string to be added (malloc'ed string)
 *
 * Return: pointer to the new node, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the head of the list
 * @str: string to be added (malloc'ed string)
 *
 * Return: pointer to the new node, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the head of the list
 * @str: string to be added (malloc'ed string)
 *
 * Return: pointer to the new node, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str);

#endif /* LISTS_H */
