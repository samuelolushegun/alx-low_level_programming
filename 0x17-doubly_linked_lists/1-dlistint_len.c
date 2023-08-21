#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - count numbers of elements in a dlistint_t list
 * @h: pointer to a dlistint_t list
 *
 *Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *traverse_ptr;
	size_t compteur_de_noeud = 0;

	traverse_ptr = malloc(sizeof(dlistint_t));
	if (traverse_ptr == NULL)
		return (EXIT_FAILURE);

	traverse_ptr = h;

	while (traverse_ptr != NULL)
	{
		compteur_de_noeud++;
		traverse_ptr = traverse_ptr->next;
	}

	return (compteur_de_noeud);
}
