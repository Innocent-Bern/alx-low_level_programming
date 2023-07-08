#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: number of indecies in the hash table.
 * Return: pointer to the created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	return (new_table);
}
