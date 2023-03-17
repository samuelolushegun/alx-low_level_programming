#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: size of the array
 * @size: size of each memberof the array
 *
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	memset(arr, 0, nmemb * size);
	return (arr);
}
