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
	list_t controll_node;
	list_t *node = &controll_node;
	size_t len = 0;

	if (str == NULL)
		return (NULL);
	printf("Pass 1\n");
	while (*str)
	{
		len++;
		str++;
	}
	printf("Pass 2\n");
	node->len = len;
	node->str = strdup(str);
	node->next = *head;
	printf("Pass %s\n", "str");
	return (node);
}

