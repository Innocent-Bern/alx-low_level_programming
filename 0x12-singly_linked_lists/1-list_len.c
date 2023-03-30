#include "lists.h"

/**
* get_next_node - print content of subsequent nodes
* @nxt: input pointer
* @i: input of type size_t, that tracks the number of nodes
* Return: unsigned int value of number of nodes
*/
size_t get_next_node(struct list_s *nxt, size_t i)
{
	while (nxt->next)
		get_next_node(nxt->next, i + 1);
	return (i);
}

/**
* list_len - function that returns the number of elements in a linked list
* @h: list node input
* Return: number of elements/nodes
*/

size_t list_len(const list_t *h)
{
	struct list_s node;
	size_t num_nodes;

	if (h == NULL)
		return (0);

	num_nodes = 1;
	node.next = h->next;

	return (num_nodes + get_next_node(node.next, num_nodes));
}

