#include "lists.h"

/**
* get_next_node - print content of subsequent nodes
* @node: input pointer
* @i: input of type size_t, that tracks the number of nodes
* Return: unsigned int value of number of nodes
*/
size_t get_next_node(list_t *node, size_t i)
{
	if (node == NULL)
		return (i);
	while (node->next)
		get_next_node(node->next, i + 1);
	return (i);
}

/**
* list_len - function that returns the number of elements in a linked list
* @h: list node input
* Return: number of elements/nodes
*/

size_t list_len(const list_t *h)
{
	size_t num_nodes;

	if (h == NULL)
		return (0);

	num_nodes = 1;
	return (num_nodes + get_next_node(h->next, num_nodes));
}

