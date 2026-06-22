#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in a hash table.
 * @ht: A pointer to the hash table instance to look into.
 * @key: The key string you are searching for.
 *
 * Return: The string value associated with the element,
 * or NULL if the key could not be found or inputs are invalid.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *cursor = NULL;

if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

index = key_index((const unsigned char *)key, ht->size);

cursor = ht->array[index];
while (cursor != NULL)
{
if (strcmp(cursor->key, key) == 0)
return (cursor->value);
cursor = cursor->next;
}
return (NULL);
}
