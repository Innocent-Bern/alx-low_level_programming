#include "lists.h"
#include <stdlib.h>

/**
* free_list - function that frees a linked list.
* @head: first node of the linked list
* Return: void
*/

void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_list(head->next);
	free(head);
}

