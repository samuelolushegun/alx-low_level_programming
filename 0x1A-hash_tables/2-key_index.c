#include "hash_tables.h"

/**
 *key_index - gives the index of a key
 *@key: the key
 *@size: size of the array of the hash table
 *
 *Return: the index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h_ind, ind;

	h_ind = hash_djb2(key);
	ind = h_ind % size;
	return (ind);
}
