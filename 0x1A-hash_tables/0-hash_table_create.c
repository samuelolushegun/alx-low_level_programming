#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: The size of the array
 *
 * Return: pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_tab = malloc(sizeof(hash_table_t));
	unsigned long int index;

	if (h_tab == NULL)
		return (NULL);

	h_tab->size = size;
	h_tab->array = malloc(sizeof(hash_node_t) * size);
	if (h_tab->array == NULL)
	{
		free(h_tab);
		return (NULL);
	}

	for (index = 0; index < size; index++)
		h_tab->array[index] = NULL;

	return (h_tab);
}
