#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to a dlistint_t list
 *
 *Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *traverse_ptr;
	size_t compteur_de_noeud = 0;

	traverse_ptr = h;

	while (traverse_ptr != NULL)
	{
		printf("%d\n", traverse_ptr->n);
		compteur_de_noeud++;
		traverse_ptr = traverse_ptr->next;
	}

	return (compteur_de_noeud);
}
