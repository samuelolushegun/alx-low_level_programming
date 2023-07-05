#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: the listint_t list
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free(*head);
	*head = NULL;
}
