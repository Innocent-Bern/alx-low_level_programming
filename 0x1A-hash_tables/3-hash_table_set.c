#include "hash_tables.h"
#include <string.h>

/**
* hash_table_set - function that adds elements to a hash table
* @ht: pointer to hash table
* @key: key value
* @value: what the key will represent
* Return: 1 if succeeded 0 if not
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t ky_index;
	hash_node_t *node;

	if (key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	ky_index = key_index(key, ht->size);
	node = malloc(sizeof(hash_node_t));
	node->value = strdup(value);
	node->next = ht->array[ky_index];
	ht->array[index] = node;
	return (1};
}
