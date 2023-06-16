#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a linked list
 * @head: The start of a list
 * @index: Position of the node, starting from 0
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        dlistint_t *temp;
        unsigned int count;

        if (head == NULL)
                return NULL;
        temp = head;
        count = 1;
        while (temp != NULL && count != index)
        {
                temp = temp->next;
		count++;
        }
	return (temp);
}
