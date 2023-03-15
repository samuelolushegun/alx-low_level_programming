#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: firt string pointer
 * @s2: second string pointer
 *
 * Return: pointer whom point to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *t;
	int i = 0;

	if (s1 == NULL && s2 == NULL)
	{
		t = malloc(sizeof(char));
		if (t == NULL)
			return (NULL);
		*t = '\0';
		return (t);
	}
	else if (s1 != NULL || s2 != NULL)
	{
		t = malloc((strlen(s1) + strlen(s2)) * sizeof(char) + 1);
		if (t == NULL)
			return (NULL);
		if (s1 != NULL)
		{
			for (i = 0; s1[i]; i++)
			{
				t[i] = s1[i];
			}
		}
		if (s2 != NULL)
		{
			while (*s2 != '\0')
			{
				t[i] = *s2;
				i++;
				s2++;
			}
		}
		t[i] = '\0';
	}
	return (t);
}
