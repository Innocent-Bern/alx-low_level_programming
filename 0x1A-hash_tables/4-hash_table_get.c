#include "hash_tables.h"

/**
 * hash_table_get - function that gets value associated with a key
 * @ht: pointer to hash table
 * @key: key input
 * Return: pointer to the found key
*/ 
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index;
	hash_node_t node;

	if (key == NULL || ht == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
