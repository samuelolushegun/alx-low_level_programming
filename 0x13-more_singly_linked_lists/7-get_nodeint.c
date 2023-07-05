#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Get node at index
 * @head: listint_t list
 * @index: index of node that will be get
 *
 * Return: nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (curr != NULL)
	{
		if (i == index)
			return (curr);
		i++;
		curr = curr->next;
	}
	return (NULL);
}
