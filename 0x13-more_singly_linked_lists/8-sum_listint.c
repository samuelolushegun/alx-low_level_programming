#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Sum list
 * @head: listint_t linked list
 *
 * Return: sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *curr = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
