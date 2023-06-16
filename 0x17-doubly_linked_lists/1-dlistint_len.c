#include "lists.h"

/**
 * dlistint_len - Returns number of elements in a list
 * @h: Pointer to beginning of a list
 * Return: Number of elements in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
