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
	char *a2, *a;
	unsigned long int i;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
	{
		a2 = (char *)malloc(sizeof(char));
		a2[0] = '\0';
	}
	else
	{
		a2 = (char *)malloc(sizeof(char) * strlen(s2));
		strcpy(a2, s2);
	}
	a = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(a2) + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		a[i] = s1[i];
	for (i = strlen(s1); i < (strlen(s1) + strlen(a2)); i++)
		a[i] = a2[(i - strlen(s1))];
	a[i] = '\0';
	return (a);
}
