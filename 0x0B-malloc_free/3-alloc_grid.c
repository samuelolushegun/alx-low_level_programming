#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocate memory for a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: the address of the two dimensional grid
 */

int **alloc_grid(int width, int height)
{
	int i, j, **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **)malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
		a[i] = (int *)malloc(sizeof(int) * width);
	if (!a)
	{
		for (i = 0; i < height; i++)
			free(a[i]);
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
