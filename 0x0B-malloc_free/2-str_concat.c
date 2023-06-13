#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: A pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *a1, *a2, *a;
	unsigned long int i;

	if (s1 == NULL)
	{
		a1 = (char *)malloc(sizeof(char));
		a1[0] = '\0';
	}
	else
	{
		a1 = (char *)malloc(sizeof(char) * (strlen(s1) + 1));
		strcpy(a1, s1);
	}
	if (s2 == NULL)
	{
		a2 = (char *)malloc(sizeof(char));
		a2[0] = '\0';
	}
	else
	{
		a2 = (char *)malloc(sizeof(char) * (strlen(s2) + 1));
		strcpy(a2, s2);
	}
	a = (char *)malloc(sizeof(char) * (strlen(a1) + strlen(a2) + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < strlen(a1); i++)
		a[i] = a1[i];
	for (i = strlen(a1); i < (strlen(a1) + strlen(a2)); i++)
		a[i] = a2[(i - strlen(a1))];
	a[i] = '\0';
	free(a1);
	free(a2);
	return (a);
}
