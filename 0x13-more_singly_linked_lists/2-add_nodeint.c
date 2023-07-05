#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: ponter to a listint_t list
 * @n: data that will be added.
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
