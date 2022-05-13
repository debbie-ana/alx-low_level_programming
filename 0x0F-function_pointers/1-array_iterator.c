#include <stdio.h>

/**array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array of elements
 * @size: size of the array
 * @action: pointer to function to be used
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;
	while (size--)
		action(*array++);
}
