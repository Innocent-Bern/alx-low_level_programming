#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: number of indecies in the hash table.
 * Return: pointer to the created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	if (size == 0)
	{
		return (NULL);
	}

	new_table = malloc(sizeof(hash_table_t));
	new_table->size = size;

	return (new_table);
}
