#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
* add_node - function that adds a new node at the beginning of list_t
* @head: first node of linked list
* @str: 
* Return: address of the new element or null if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t node_t, *node = &node_t;
	size_t len = 0;

	while (str[len])
	{
		len++;
	}
	node->len = len;
	node->str = strdup(str);
	node->next = *head;
	return (node);
}

