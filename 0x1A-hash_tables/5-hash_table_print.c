#include "hash_tables.h"

/**
 * key_value - function that concats key and value of a node
 * @node: node of a linked list.
 * Return: pointer to resulting string
 */
char *key_value(hash_node_t *node)
{
	char str_arr[4096] = "'", *str = &str_arr[0];
	strcat(str, node->key);
	strcat(str, "': ");
	strcat(str, node->value);
	strcat(str, "', ");
	return (str);
}
/**
 * hash_table_print - function that prints a hash table
 * ht: pointer to the hash_table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cur;
	size_t count = 0;
	char str[4096] = "{";

	if (ht == NULL)
		return;

	 while (count < ht->size)
	{
		cur = ht->array[count];
		while (cur != NULL)
		{
			strcat(&str[strlen(str)], key_value(cur));
			cur = cur->next;
		}
		count++;
	}
	if (strlen(str) > 1)
		str[strlen(str) - 2] = '\0';
	strcat(&str[strlen(str)], "}\n");
	printf("%s", str);
}
