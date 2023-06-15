#include "lists.h"

/**
 * new_node - function that creates a new node.
 * @n: value that the node will hold.
 * Return: Address of the new node.
 */
dlistint_t *new_node(int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
