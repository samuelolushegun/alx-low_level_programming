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
	unsigned int len = ((sizeof(unsigned long int) * 8) - 1);

	if (index > len)
		return (-1);

	n = n >> index;
	return (n & 1);
}
