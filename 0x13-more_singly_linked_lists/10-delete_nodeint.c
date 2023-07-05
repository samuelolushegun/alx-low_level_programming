#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * @head: a listint_t linked list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *del;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		del = *head;
		*head = (*head)->next;
		free(del);
		return (1);
	}

	temp = *head;

	while (i < (index - 1))
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}

	del = temp->next;
	temp->next = temp->next->next;

	free(del);
	return (1);
}
