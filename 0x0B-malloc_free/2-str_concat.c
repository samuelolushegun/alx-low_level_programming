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
	char *a;
	int i, a1, a2;

	if (s1 == NULL)
	{
		s1[0] = '\0';
		a1 = 0;
	}
	else
		a1 = strlen(s1);
	if (s2 == NULL)
	{
		s2[0] = '\0';
		a2 = 0;
	}
	else
		a2 = strlen(s2);
	a = (char *)malloc(sizeof(char) * (a1 + a2 + 1));
	if (a == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; i < a1; i++)
			a[i] = s1[i];
	}
	if (s2 != NULL)
	{
		for (i = a1; i < (a1 + a2); i++)
			a[i] = s2[(i - a1)];
	}
	a[i] = '\0';
	return (a);
}
