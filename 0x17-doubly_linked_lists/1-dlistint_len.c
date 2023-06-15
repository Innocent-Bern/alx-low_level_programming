#include "lists.h"

/**
* dlistint_len- function that returns the numbers of nodes of a linked list.
* @h: head node of linked list.
* Return: number of nodes.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
