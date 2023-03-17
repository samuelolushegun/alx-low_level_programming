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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	t = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	for (i = 0; s1[i]; i++)
	{
		t[i] = s1[i];
	}
	while (*s2 != '\0')
	{
		t[i] = *s2;
		i++;
		s2++;
	}
	t[i] = '\0';
	return (t);
}
