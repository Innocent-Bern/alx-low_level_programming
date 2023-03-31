#include "lists.h"
#include <stdio.h>

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
	if (node->str == NULL)
	{
		printf("[0] (nil)\n");
	} else
	{
		printf("[%d] %s\n", node->len, node->str);
	}
	while (node->next)
		get_next_node(node->next, i + 1);

	return (i);
}

/**
* print_list - function that prints all the elements of a list_t
* @h: input pointer of type list_t
* Return: unsigned int value of number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t list_len = 1;

	if (h == NULL)
		return (0);
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	} else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	if (h->next == NULL)
		return (1);
	return (list_len + get_next_node(h->next, list_len));
}

