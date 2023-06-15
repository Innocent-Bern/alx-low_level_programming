#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node.
 * @head: first node of linked list
 * @index: position of node needed.
 * Return: Address of found node.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (count == index)
			break;
		head = head->next;
		count++;
	}
	return (head);
}
