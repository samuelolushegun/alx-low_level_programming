#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: list that will be freed
 *
 * return: Nothing in success
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
