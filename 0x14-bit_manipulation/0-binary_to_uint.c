#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 char
 *
 * Return: converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bi, w = 1, i, uint = 0;

	if (b == NULL)
		return (0);

	i = strlen(b);
	while (i != 0)
	{
		if (b[(i - 1)] != '1' && b[(i - 1)] != '0')
			return (0);
		if (b[(i - 1)] == '1')
			bi = 1;
		else
			bi = 0;

		uint = uint + (bi * w);
		i--;
		w = w * 2;
	}
	return (uint);
}
