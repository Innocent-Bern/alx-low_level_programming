#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - a function that frees a linked list
* @head: address of the first node of a linked list
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *node = *head;

	if (node == NULL)
	{
		return;
	}
	else if (node->next == NULL)
	{
		free(node);
		return;
	}

	*head = node->next;
	free_listint2(head);
	free(node);
}

