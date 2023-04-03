#include "lists.h"
#include <stdlib.h>

/**
* free_listint - function that frees a linked list
* @head: first node of the linked list
*/

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}

