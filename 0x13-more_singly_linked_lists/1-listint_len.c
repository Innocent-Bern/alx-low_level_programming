#include "lists.h"

/**
* listint_len - function that returns the number of elements in a linked list
* @h: first node of the linked list 
* Return: size_t number of node/elements
*/

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	if (h == NULL)
		return (num_nodes);
	num_nodes++;
	return (num_nodes += listint_len(h->next));
}

