#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all data in a list
 * @head: Pointer to beginning of list
 * Return: Sum of data, or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
