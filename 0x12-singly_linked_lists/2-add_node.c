#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Add a new node to the beginning of a linked list
 * @head: Double pointer to the list_t list
 * @str: New string to add to the node
 * Return: Address to the new element, or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
