#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: beginning value
 * @max: ending value
 *
 * Description - the array created will contain all values from min(included)
 * to max(included) ordered from min to max
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *s;
	int i, r;

	if (min > max)
		return (NULL);
	r = max - min + 1;
	s = malloc(sizeof(int) * r);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < r; i++, min++)
		s[i] = min;
	return (s);
}
