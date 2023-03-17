#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string that will be concatenate
 * @s2: second string that will be concatenate
 * @n: third parameters
 *
 * Return: a pointer to a new concatenate string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (strlen(s2) <= n)
	{
		n = strlen(s2);
		t = malloc(((strlen(s1) + strlen(s2)) * sizeof(char)) + 1);
	}
	else
		t = malloc(((strlen(s1) + n) * sizeof(char)) + 1);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		t[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		t[i] = s2[j];
		i++;
	}
	t[i] = '\0';
	return (t);
}
