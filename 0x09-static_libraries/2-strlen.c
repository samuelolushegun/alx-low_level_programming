#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: parameter
 *
 * Return: the lenth of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
