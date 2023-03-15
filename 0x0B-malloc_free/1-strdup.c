#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string given as a parameter.
 *
 * Return: A ptr.
 */

char *_strdup(char *str)
{
	char *t;

	if (str == NULL)
		return (NULL);
	t = (char *) malloc(strlen(str) * sizeof(char) + 1);
	if (t == NULL)
	{
		free(t);
		return (NULL);
	}
	strcpy(t, str);
	return (t);
}
