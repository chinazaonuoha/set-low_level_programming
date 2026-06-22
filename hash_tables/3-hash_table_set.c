#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

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

/* Phase 1: Strict Input Validation */
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

/* Get the target bucket index */
index = key_index((const unsigned char *)key, ht->size);

/* Phase 2: Look for an Existing Key (Update Routine) */
cursor = ht->array[index];
while (cursor != NULL)
{
if (strcmp(cursor->key, key) == 0)
{
/* Duplicate the new value before freeing the old one */
new_value = strdup(value);
if (new_value == NULL)
return (0);

free(cursor->value);
cursor->value = new_value;
return (1); /* Update successful */
}
cursor = cursor->next;
}

/* Phase 3: Allocate and Initialize a New Node */
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);

new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (0);
}

new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (0);
}

/* Phase 4: Prepend Node to Handle Collisions gracefully in O(1) */
new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
