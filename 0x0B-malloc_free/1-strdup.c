#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicate string
 * @str: string to be duplicate
 *
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *a;
	unsigned long int i;

	if (str == NULL)
		return (NULL);
	a = (char *)malloc((strlen(str) + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		a[i] = str[i];
	a[i] = '\0';
	return (a);
}
