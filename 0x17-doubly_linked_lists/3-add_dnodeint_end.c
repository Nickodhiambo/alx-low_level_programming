#include <stdlib.h>
#include "lists.h"

/**
 * dd_dnodeint_end - Adds a node at the end of a list
 * @head: Pointer to the new node
 * n: New node's data part
 * Return: Address to the added node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *last_node = malloc(sizeof(dlistint_t));

	if (last_node ==  NULL)
		return NULL;

	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
	{
		last_node->prev = NULL;
		*head = last_node;
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		temp->next = last_node;
		last_node->prev = temp;
	}

	return (*head);
}
