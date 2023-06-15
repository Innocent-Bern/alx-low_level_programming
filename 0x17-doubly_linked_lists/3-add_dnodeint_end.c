#include "lists.h"
#include "2-add_dnodeint.c"
/**
 * add_dnodeint_end- function that adds node at end of linked lisr
 * @head: pointer to the address of the first node.
 * @n: value that added node will hold.
 * Return: Address of new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = new_node(n);
	dlistint_t *cur_node = *head;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	while (cur_node != NULL)
	{
		if (cur_node->next == NULL)
		{
			cur_node->next = node;
			node->prev = cur_node;
			break;
		}
		cur_node = cur_node->next;
	}
	return (node);
}
