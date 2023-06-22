#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator -  executes a function given as a parameter on each element
 * of an array.
 * @array: an array of int
 * @size: size of the array
 * @action: pointer to the function whose will be used
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
