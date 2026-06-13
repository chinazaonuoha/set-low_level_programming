#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the head of the list
 * @str: string to be added (malloc'ed string)
 *
 * Return: pointer to the new node, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *copy_str;
unsigned int length = 0;

if (head == NULL || str == NULL)
return (NULL);

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

copy_str = strdup(str);
if (copy_str == NULL)
{
free(new_node);
return (NULL);
}

while (str[length] != '\0')
{
length++;
}

new_node->str = copy_str;
new_node->len = length;
new_node->next = *head;
*head = new_node;

return (new_node);
}
