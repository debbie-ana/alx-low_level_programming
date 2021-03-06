#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Description - elements of the grid should be initialized to 0
 * Return: NULL on failure, else pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	s = malloc(height * sizeof(int *));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}
	return (s);
}
