#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: a dlistint_t list that wille be update
 * @n: data of the new node
 *
 * Return: address of the new element, or NULL in faillure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = *head;

	if (*head != NULL)
		(*head)->prev = n_node;

	*head = n_node;
	return (*head);
}
