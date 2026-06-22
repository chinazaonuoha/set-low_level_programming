#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and frees all allocated memory.
 * @ht: A pointer to the hash table instance to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *cursor = NULL;
hash_node_t *next_node = NULL;

/* Guard rail against NULL pointers */
if (ht == NULL)
return;

/* Step 1: Free all individual nodes and their content inside the buckets */
for (i = 0; i < ht->size; i++)
{
cursor = ht->array[i];
while (cursor != NULL)
{
next_node = cursor->next;
free(cursor->key);
free(cursor->value);
free(cursor);
cursor = next_node;
}
}
free(ht->array);
free(ht);
}