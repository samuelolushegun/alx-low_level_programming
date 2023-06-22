#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: an array of int
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: -1 or index of the element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return;
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
