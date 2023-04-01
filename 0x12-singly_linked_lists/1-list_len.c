#include "lists.h"

/**
* list_len - function that returns the number of elements in a linked list
* @h: list node input
* Return: number of elements/nodes
*/

size_t list_len(const list_t *h)
{
	size_t num_nodes = 1;

	if (h == NULL)
		return (0);
	
	if (h->next == NULL)
		return (num_nodes);
	return (num_nodes += list_len(h->next));
}

