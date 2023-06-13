#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a grid of integers
 * @grid: the address of the two dimensional grid
 * @height: height of grid
 *
 *Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
