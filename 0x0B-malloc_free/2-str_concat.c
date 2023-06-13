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
	int i, x, a1 = 0, a2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		a1++;
	a2 = strlen(s2);
	a = (char *)malloc(sizeof(char) * (a1 + a2 + 1));
	if (a == NULL)
		return (NULL);
	x = 0;
	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
		{
			a[x] = s1[i];
			x++;
		}
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i]; i++)
			a[x++] = s2[i];
	}
	a[x] = '\0';
	return (a);
}
