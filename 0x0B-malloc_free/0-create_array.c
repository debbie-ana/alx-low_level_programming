#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with
 * a specific character
 * @size: size of array
 * @c: character to be initialised with
 *
 * Return: pointer to created array
 */

char *create_array(unsigned int size, char c)
{
	char *a = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
