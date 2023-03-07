#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: parameter that will be checked
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
		return (0);
}
