#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a list
 * @h: Pointer to the beginning of the list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
