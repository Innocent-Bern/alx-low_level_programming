#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function that frees a double linked list
 * @head: first node of linked list
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
		free_dlistint(head->next);
	free(head);
}
