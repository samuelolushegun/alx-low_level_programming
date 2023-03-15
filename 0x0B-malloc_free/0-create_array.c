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
	char *t;
	unsigned int i;

	if (size == 0)
		return (NULL);
	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		t[i] = c;
	return (t);
}
