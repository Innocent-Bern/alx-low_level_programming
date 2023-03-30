#include "lists.h"
#include <stdio.h>

/**
* get_next_node - print content of subsequent nodes
* @nxt: input pointer
* @i: input of type size_t, that tracks the number of nodes
* Return: unsigned int value of number of nodes
*/

size_t get_next_node(struct list_s *nxt, size_t i)
{
	struct list_s sub;

	sub.str = nxt->str;
	sub.len = nxt->len;
	sub.next = nxt->next;
	if (sub.str == NULL)
	{
		printf("[0] (nil)\n");
	} else
	{
		printf("[%d] %s\n", sub.len, sub.str);
	}
	while (sub.next)
		get_next_node(sub.next, i + 1);

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
	struct list_s sub;

	sub.str = h->str;
	sub.len = h->len;
	sub.next = h->next;
	if (sub.str == NULL)
	{
		printf("[0] (nil)\n");
	} else
	{
		printf("[%d] %s\n", sub.len, sub.str);
	}

	return (list_len + get_next_node(sub.next, list_len));
}

