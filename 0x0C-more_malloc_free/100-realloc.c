#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: a pointer to the new memory allocated in succes
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *t;
	char *arr;
	unsigned int i, n;

	if (ptr == NULL)
	{
		t = malloc(new_size);
		return (t);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	t = malloc(new_size);
	if (t == NULL)
	{
		free(ptr);
		return (NULL);
	}
	arr = ptr;
	if (new_size < old_size)
		n = new_size;
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
	{
		t[i] = arr[i];
	}
	free(ptr);
	return (t);
}
