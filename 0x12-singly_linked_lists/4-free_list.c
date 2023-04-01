#include "lists.h"
#include <stdlib.h>

/**
* free_list - function that frees a linked list.
* @head: first node of the linked list
* Return: void
*/

void free_list(list_t *head)
{
	if (head->next == NULL)
	{
		free(head->str);
		free(head);
		return;
	}
	free_list(head->next);
	free(head);
}

