#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: a dlistint_t list that wille be update
 * @n: data of the new node
 *
 * Return: address of the new element, or NULL in faillure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node, *tmp;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;
	n_node->prev = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (*head);
	}

	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = n_node;
	n_node->prev = tmp;
	return (n_node);
}
