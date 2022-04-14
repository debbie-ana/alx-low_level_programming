#include "main.h"

/**
 * print_line - printing lines using _
 * @n: number of _ to form line
 *
 * Return: void
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar('_');
			a++;
		}
	}
	_putchar('\n');
}
