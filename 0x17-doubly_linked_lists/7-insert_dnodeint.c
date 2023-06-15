#include "lists.h"

/**
 * insert_node - function that creates a new node.
 * @n: value that the node will hold.
 * Return: Address of the new node.
 */
dlistint_t *insert_node(int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
/**
 * insert_dnodeint_at_index - function at adds node at a given index
 * @h: first node of linked list.
 * @idx: index to add node.
 * @n: data that node will hold.
 * Return: Address of new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t count = 0;
	dlistint_t *cur = *h, *node = NULL;

	if (*h == NULL && idx == 0)
	{
		*h = insert_node(n);
		return (*h);
	}
	while (cur != NULL)
	{
		if (count == idx)
		{
			node = insert_node(n);
			node->prev = cur->prev;
			cur->prev = node;
			node->next = cur;
			break;
		}
		cur = cur->next;
		count++;
	}
	return (node);
}
