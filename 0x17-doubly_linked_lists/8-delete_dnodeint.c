#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes node at index
 * @head: Pointer to address of first node.
 * @index: node to delete
 * Return: 1 on success -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *cur = *head, *node = NULL;

	if (*head == NULL)
		return (-1);

	while (cur != NULL)
	{
		if (count == index)
		{
			node = cur->prev;
			node->next = cur->next;
			free(cur);
			break;
		}
		cur = cur->next;
		count++;
	}
	if (count > index)
		return (-1);
	return (1);
}
