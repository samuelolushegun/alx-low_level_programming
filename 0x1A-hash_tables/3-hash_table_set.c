#include "hash_tables.h"

/**
 *hash_table_set - adds an element to the hash table
 *@ht: hash table that will be update
 *@key: the key
 *@value: value associated with the key
 *
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind; hash_node_t *n_node;

	if (!ht || !key || !value || strcmp(key, "") == 0)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	if (ht->array[ind] == NULL)
	{
		ht->array[ind] = malloc(sizeof(hash_node_t));
		if (ht->array[ind] == NULL)
			return (0);
		(ht->array[ind])->key = strdup(key);
		if ((ht->array[ind])->key == NULL)
		{
			free(ht->array[ind]);
			return (0);
		}
		(ht->array[ind])->value = strdup(value);
		if ((ht->array[ind])->value == NULL)
		{
			free((ht->array[ind])->key);
			free(ht->array[ind]);
			return (0);
		}
		(ht->array[ind])->next = NULL;
		return (1);
	}
	else
	{
		n_node = malloc(sizeof(hash_node_t));
		if (n_node == NULL)
			return (0);
		n_node->key = strdup(key);
		if (n_node->key == NULL)
		{
			free(n_node);
			return (0);
		}
		n_node->value = strdup(value);
		if (n_node->value == NULL)
		{
			free(n_node->key);
			free(n_node);
			return (0);
		}
		n_node->next = ht->array[ind];
		ht->array[ind] = n_node;
		return (1);
	}
}
