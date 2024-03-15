#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * printArray - Print the array being searched
 * @arr: pointer to the first element of array that will be printed
 * @size: the size of array
 *
 * Return: Nothing.
 */
void printArray(int *arr, size_t size)
{
	size_t i;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
		if (i != size - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return:  index where value is located or -1.
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int middle = left + (right - left) / 2;

		printArray(array + left, right - left + 1);
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
