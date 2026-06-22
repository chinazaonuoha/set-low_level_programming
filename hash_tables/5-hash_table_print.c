#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *cursor = NULL;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
cursor = ht->array[i];
while (cursor != NULL)
{
printf("'%s': '%s'\n", cursor->key, cursor->value);
cursor = cursor->next;
}
}
}
