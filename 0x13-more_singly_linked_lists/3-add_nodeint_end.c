#include "lists.h"
#include <stdlib.h>

/**
* create_last_node - function the creates the last node
* @n: int value to be added to the n property
* Return: Address of the last node
*/

listint_t *create_last_node(const int n)
{
	listint_t *last_node = malloc(sizeof(listint_t));

	last_node->n = n;
	last_node->next = NULL;
	return (last_node);
}

/**
* get_last_node - function the gets the address of the last node
* @head: address of the first node
* Return: Address of the last node
*/
listint_t *get_last_node(listint_t *head)
{
	if (head->next == NULL)
		return (head);
	return (get_last_node(head->next));
}

/**
* add_nodeint_end - function that adds a new node at the end of linked list
* @head: address of the first node
* @n: int value to be added to the n property
* Return: address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (*head == NULL)
	{
		*head = create_last_node(n);
		return (*head);
	}
	return (get_last_node(*head)->next = create_last_node(n));
}

