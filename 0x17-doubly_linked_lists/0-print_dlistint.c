#include "lists.h"
#include <sys/types.h>
#include <stdio.h>

/**
* print_dlistint - function that prints all elements of a double linked list.
* @h: head node of linked list.
* Return: number of nodes in the list.
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
