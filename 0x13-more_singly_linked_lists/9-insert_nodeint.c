#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: listint_t linked list
 * @idx: index of the list where the new node should be added
 * @n: data of new node
 *
 * Return: the address of the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *n_node, *traverse = *head;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	for (i = 0; i < (idx - 1); i++)
	{
		if (traverse == NULL)
			return (NULL);
		traverse = traverse->next;
	}

	n_node->next = traverse->next;
	traverse->next = n_node;
	return (n_node);
}
