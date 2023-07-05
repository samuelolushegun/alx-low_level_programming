#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: a listint_t list
 * @n: dta that wille be added
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nde, *last;

	last = malloc(sizeof(listint_t));
	if (last == NULL)
		return (NULL);
	last->n = n;
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
		return(last);
	}
	nde = *head;
	while (nde->next != NULL)
	{
		nde = nde->next;
	}
	nde->next = last;
	return (last);
}
