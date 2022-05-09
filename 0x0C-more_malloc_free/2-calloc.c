#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and setting memory to 0
 * @nmemb: number of elements in array
 * @size: bytes of each element
 *
 * Return: pointer to allocated memory or NULL if it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;
	return ((void *)s);
}
