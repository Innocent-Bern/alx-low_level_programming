#include "lists.h"
#include <stdlib.h>

/**
* create_node - function that creates a new node
* @n: number that to added to the n property of the nodes
* @next_node: address of the next node
* Return: Address of the new node
*/

listint_t *create_node(const int n, listint_t *next_node)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = next_node;
	return (new_node);
}

/**
* add_nodeint -function that adds a new node at the beginning of a linked list
* @head: address of the first node
* @n: number that to added to the n property of the nodes
* Return: address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	*head = create_node(n, *head);
	return (*head);
}

