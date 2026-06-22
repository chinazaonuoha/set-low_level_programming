#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_node - Helper to safely allocate and duplicate a new hash node.
 * @key: The key string to duplicate.
 * @value: The value string to duplicate.
 *
 * Return: A pointer to the new node, or NULL on memory failure.
 */
hash_node_t *create_node(const char *key, const char *value)
{
hash_node_t *new_node = malloc(sizeof(hash_node_t));

if (new_node == NULL)
return (NULL);

new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (NULL);
}

new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (NULL);
}

new_node->next = NULL;
return (new_node);
}

/**
* hash_table_set - Adds or updates an element in the hash table.
* @ht: The hash table to add or update the key/value to.
* @key: The key string (cannot be empty or NULL).
* @value: The value string associated with the key (must be duplicated).
*
* Return: 1 if it succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *cursor = NULL;
hash_node_t *new_node = NULL;
char *new_value = NULL;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);

cursor = ht->array[index];
while (cursor != NULL)
{
if (strcmp(cursor->key, key) == 0)
{
new_value = strdup(value);
if (new_value == NULL)
return (0);
free(cursor->value);
cursor->value = new_value;
return (1);
}
cursor = cursor->next;
}

new_node = create_node(key, value);
if (new_node == NULL)
return (0);

new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
