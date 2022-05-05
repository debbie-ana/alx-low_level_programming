#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2d array created by alloc_grid function
 * @grid: array to be freed
 * @height: number of rows
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
