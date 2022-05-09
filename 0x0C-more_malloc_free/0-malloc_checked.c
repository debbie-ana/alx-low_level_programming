#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL || b > INT_MAX - 1)
		exit(98);
	else
		return (malloc(b * sizeof(char)));
}
