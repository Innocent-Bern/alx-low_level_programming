#include "lists.h"
#include <stdlib.h>
#include "7-get_nodeint.c"
/**
* create_node - A function that creates a new node
* @n: value of n property of the inserted node
* Return: Address of the created node.
*/
listint_t *create_node(int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}

/**
* insert_nodeint_at_index - function that adds a node at the nth index.
* @head: first node of a singly linked list
* @idx: index where the node will be inserted.
* @n: value of n property of the inserted node
* Return: Address of the new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new_node = create_node(n);
	listint_t *above_node = get_nodeint_at_index(*head, idx - 1);
	listint_t *below_node = get_nodeint_at_index(*head, idx);
	if (*head == NULL)
		return (new_node);
	if (above_node == NULL && below_node != NULL)
	{
		new_node->next = below_node;
		return (new_node);
	}
	above_node->next = new_node;
	new_node->next = below_node;
	return (new_node);
}

