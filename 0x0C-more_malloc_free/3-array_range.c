#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first value in the array
 * @max: last value in the array
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int j = 0;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}
	return (arr);
}
