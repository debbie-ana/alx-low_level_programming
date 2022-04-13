#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from given number to 98
 * @n: given number
 *
 * Return: void
 */

void print_to_98(int n)
{
	for (; n > 98; n--)
		printf("%d, ", n);
	for (; n < 98; n++)
		printf("%d, ", n);
	printf("98");
	printf("\n");
}
