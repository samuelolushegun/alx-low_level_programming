#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - compute List length
 * @h: a linked list
 *
 * Return:  number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	if (h == NULL)
		return (count);
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
