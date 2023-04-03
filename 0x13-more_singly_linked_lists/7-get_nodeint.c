#include "lists.h"
#include <stdlib.h>

/**
* get_nodeint_at_index - function that gets the nth nodes of a linked list
* @head: first node of a linked list
* @index: position of the node the we're interested in
* Return: Address of the nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	head = head->next;
	index -= 1;
	return (get_nodeint_at_index(head, index));
}

