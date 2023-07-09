#include "hash_tables.h"

/**
 * free_linked_list - function that frees nodes of a linked list
 * @node: head node of linked list
*/
void free_linked_list(hash_node_t *node)
{
	if (node != NULL)
	{
		free(node->key);
		free(node->value);
		free_linked_list(node->next);
	}
	free(node);
}
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: pointer to hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	size_t count = 0;

	while (count < ht->size)
	{
		free_linked_list(ht->array[count]);
		count++;
	}
	free(ht->array);
	free(ht);
}
