#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_listint - function that prints all the elements of a list
* @h: head/first node of linked list
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	unsigned int num_nodes = 0;

	if (h == NULL)
		return (num_nodes);
	printf("%d\n", h->n);
	num_nodes = 1;
	return (num_nodes += print_listint(h->next));
}

