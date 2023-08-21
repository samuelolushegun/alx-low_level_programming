#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: nth node of the list or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *traverse;

	traverse = head;
	while (traverse != NULL)
	{
		if (count == index)
			return (traverse);
		traverse = traverse->next;
		count++;
	}
	return (NULL);
}
