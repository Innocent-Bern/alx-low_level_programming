#include "lists.h"
#include <stdlib.h>

/**
 * create_node - function that creates a new node.
 * @n: value that the node will hold.
 * Return: Address of the new node.
 */
dlistint_t *create_node(int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	node->n = n;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
/**
 * add_dnodeint - function that adds node at the beginning of a linked lists.
 * @head: pointer to address of first node of linked list
 * @n: value that new node will contain.
 * Return: Address of new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = create_node(n);
	dlistint_t *cur_head = *head;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	cur_head->prev = node;
	node->next = cur_head;
	*head = node;
	return (*head);
}
