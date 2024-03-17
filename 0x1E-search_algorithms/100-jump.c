#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search -  searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, b = 0, i = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (b < size && array[b] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", b, array[b]);
		a = b;
		b += sqrt(size);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	for (i = a; i <= b && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
