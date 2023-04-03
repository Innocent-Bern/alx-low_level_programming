#include "lists.h"

/**
* sum_listint - function that returns the sum of all n
* properties of a linked lists
* @head: first nodes of a linked list
* Return: int type sum of n properties of a linked list
*/

int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n += sum_listint(head->next));
}

