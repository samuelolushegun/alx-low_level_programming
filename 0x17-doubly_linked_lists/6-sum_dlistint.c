#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: a linked list
 *
 * Return: 0 or sum of data in the list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int somme = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp != NULL)
	{
		somme += tmp->n;
		tmp = tmp->next;
	}
	return (somme);
}
