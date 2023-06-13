#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars
 * @size: size of array
 * @c: initialization char
 *
 * Return: a pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = (char *)malloc(sizeof(char) * size);
	if (!p)
		return (NULL);
	for (i = 0; i < size ; i++)
		*(p + i) = c;
	return (p);
}
