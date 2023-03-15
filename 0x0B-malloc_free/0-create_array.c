#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create an array of chars
 * @size: size of array
 * @c: initialization char
 *
 * Return: pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	int *t;

	if (size == 0)
		return (NULL);
	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (NULL);
	*t = c;
	return (char *)t;
}
