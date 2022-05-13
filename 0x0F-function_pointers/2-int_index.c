#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: size of array
 * @cmp: pointer to function to be used to compare values
 *
 * Return: index of first element for which cmp does not return 0
 * -1 if no elements matches or size is less than 1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	return (-1);
}
