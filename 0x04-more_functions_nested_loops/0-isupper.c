#include "main.h"

/**
 * _isupper - check for uppercase chaacterr
 * @c: character that will be checked
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
		return (0);
}
