#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - function that delete's the head node of a linked list
* and return the n property of the node.
* @head: address of the head node of the list
* Return: value of n property of the linked list
*/

int pop_listint(listint_t **head)
{
	listint_t *head_node = *head;
	int n;

	if (head_node == NULL)
		return (0);

	n = head_node->n;
	*head = head_node->next;
	free(head_node);
	return (n);
}

