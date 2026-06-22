#ifndef HASH_TABLES_H
#define HASH_TABLES_H


/**
 * struct hash_node_s - Node of a hash table.
 *
 * @key: The key, string. The key is unique in the HashTable.
 * @value: The value corresponding to a key.
 * @next: A pointer to the next node of the List.
 */
typedef struct hash_node_s
{
char *key;
char *value;
struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure.
 *
 * @size: The size of the array.
 * @array: An array of size @size. Each cell is a pointer
 * to the first node of a linked list, because we want our
 * hash table to use a Chaining collision handling.
 */
typedef struct hash_table_s
{
unsigned long int size;
hash_node_t **array;
} hash_table_t;

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table,
 * or NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size);

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str);

/**
 * key_index - Gives you the index of a key.
 * @key: The key.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 */
 unsigned long int key_index(const unsigned char *key, unsigned long int size);

 /**
  * hash_table_set - Adds an element to the hash table.
  * @ht: The hash table you want to add or update the key/value to.
  * @key: The key. Cannot be an empty string.
  * @value: The value associated with the key. Must be duplicated.
  */
 int hash_table_set(hash_table_t *ht, const char *key, const char *value);

 /**
  * hash_table_get - Retrieves a value associated with a key in a hash table.
  * @ht: A pointer to the hash table instance to look into.
  * @key: The key string you are searching for.
  */
  char *hash_table_get(const hash_table_t *ht, const char *key);

  /**
   * hash_table_print - Prints a hash table.
   * @ht: The hash table.
   */
void hash_table_print(const hash_table_t *ht);

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table.
 */
void hash_table_delete(hash_table_t *ht);
#endif
