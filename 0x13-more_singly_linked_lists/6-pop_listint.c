#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: a linked list
 *
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int d;

	if (*head == NULL)
		return (0);
	d = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (d);
}
