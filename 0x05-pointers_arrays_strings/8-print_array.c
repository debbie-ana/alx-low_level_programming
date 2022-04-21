#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: array
 * @n: number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	n--;
	while (n >= 0)
	{
		printf("%d", a[i]);
		if (n > 0)
			printf(", ");
		i++;
		n--;
	}
	printf("\n");
}
