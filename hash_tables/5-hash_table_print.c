#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table in Python dictionary format.
 * @ht: A pointer to the hash table instance to print.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *cursor = NULL;
int comma_flag = 0;

if (ht == NULL)
return;

printf("{");

for (i = 0; i < ht->size; i++)
{
cursor = ht->array[i];

while (cursor != NULL)
{
if (comma_flag == 1)
printf(", ");

printf("'%s': '%s'", cursor->key, cursor->value);
comma_flag = 1;
cursor = cursor->next;
}
}
printf("}\n");
}
