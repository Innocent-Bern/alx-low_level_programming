#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* create_node - function that creates a new node.
* @str: string to be duplicated.
* Return: address of the new node
*/

list_t *create_node(const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	size_t len = 0;

	while (str[len])
	{
		len++;
	}
	node->str = strdup(str);
	node->len = len;
	node->next = NULL;
	return (node);
}

/**
* get_last_node - function that gets the last node of a linked list
* @node: first node of a linked list
* Return: pointer to the last node
*/
list_t *get_last_node(list_t *node)
{
	if (node->next == NULL)
		return (node);
	return (get_last_node(node->next));
}

/**
* add_node_end - function that adds a new node at the end of a list_t
* @head: pointer to the head of the linked list
* @str: input string to be duplicated
* Return: address of the added node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = create_node(str);

	if (*head == NULL)
		*head = new_node;
	else
		get_last_node(*head)->next = new_node;

	return (new_node);
}

