#include "main.h"

/**
 * print_square - print square given a size
 * @size: the size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i;
	int j;

	if (s > 0)
	{
		for (i = 0; i < s; i++)
		{
			for (j = 0; j < s; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
