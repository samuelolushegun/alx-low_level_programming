#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the listint_t list
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = head->next;
	while (temp != NULL)
	{
		free(head);
		head = temp;
		temp = head->next;
	}
	free(head);
}
