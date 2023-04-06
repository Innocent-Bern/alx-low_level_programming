#include "lists.h"

/**
* reverse_listint - a function that reverses a linked list
* @head: address of the first node of the linked list
* Return: A pointer to the first node
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head, *prev = NULL;

	while (curr != NULL)
	{
		*head = curr->next;
		curr->next = prev;
		prev = curr;
		curr = *head;
	}
	*head = prev;
	return (*head);
}

