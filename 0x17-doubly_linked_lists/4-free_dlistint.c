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
	dlistint_t *curr_node = head;
	dlistint_t *proch_node;

	while (curr_node != NULL)
	{
		proch_node = curr_node->next;
		free(curr_node);
		curr_node = proch_node;
	}
}
