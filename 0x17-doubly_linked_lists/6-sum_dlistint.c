#include "lists.h"

/**
 * sum_dlistint- function that returns sum of data in list nodes.
 * @head: first node of list.
 * Return: sum of data in nodes
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
