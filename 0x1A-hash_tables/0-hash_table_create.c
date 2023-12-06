#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table.
 *@size: size of the array
 *
 *Return: a pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int ind;
	hash_table_t *myhash_tab = malloc(sizeof(hash_table_t));

	if (myhash_tab == NULL)
		return (NULL);

	myhash_tab->size = size;
	myhash_tab->array = malloc(size * sizeof(hash_node_t));
	if (myhash_tab->array == NULL)
	{
		free(myhash_tab);
		return (NULL);
	}

	for (ind = 0; ind < size; ind++)
	{
		myhash_tab->array[ind] = NULL;
	}
	return (myhash_tab);
}
