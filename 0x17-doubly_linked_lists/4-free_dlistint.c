#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Frees a list
 * @head: Pointer to the first node
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *next_node;

	while (temp != NULL)
	{
		next_node = temp->next;
		free(temp);
		temp = next_node;
	}
	head = NULL;
}
