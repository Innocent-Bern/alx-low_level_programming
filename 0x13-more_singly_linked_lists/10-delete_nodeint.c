#include "lists.h"
#include <stdlib.h>
#include "7-get_nodeint.c"

/**
* delete_nodeint_at_index - function that deletes the node at the nth index
* @head: Address of the first node.
* @index: position of the node to be deleted
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del_node = get_nodeint_at_index(*head, index);
	listint_t *above_node = get_nodeint_at_index(*head, index - 1);

	if (*head == NULL)
		return (-1);

	if (del_node == NULL)
		return (-1);

	if (above_node == NULL && del_node != NULL)
		*head = del_node->next;
	else
		above_node->next = del_node->next;
	free(del_node);
	return (1);
}

