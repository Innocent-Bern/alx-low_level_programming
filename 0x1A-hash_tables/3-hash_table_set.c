#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

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
	hash_node_t *node, *cur;

	if (key == NULL || *key == '\0' || value == NULL)
		return (0);

	ky_index = key_index((const unsigned char *)key, ht->size);

	cur = ht->array[ky_index];
	node = malloc(sizeof(hash_node_t));
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = cur;
	ht->array[ky_index] = node;
	return (1);
}
