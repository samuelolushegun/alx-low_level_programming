#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - get value of a bit at a given index
 * @n: decimal number
 * @index: index of the bit we want to get
 *
 * Return: the value of the bit at index or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int *a, *b, r, k;
	unsigned int i = 0, j = 0;
	unsigned int len = ((sizeof(unsigned long int) * 8) - 1);

	if (index > len)
		return (-1);

	a = malloc(sizeof(unsigned long int) * 8);
	if (a == NULL)
		return (-1);

	while (n != 0)
	{
		r = n & 1;
		n = n >> 1;
		a[i] = r;
		i++;
	}

	if (index > (i - 1))
		return (-1);

	b = malloc(sizeof(unsigned long int) * 8);
	if (b == NULL)
		return (-1);

	for (k = i; k != 0; k--)
	{
		b[j] = a[k];
		j++;
	}

	return (b[index]);
}
