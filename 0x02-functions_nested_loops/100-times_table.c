#include "main.h"

/**
 * print_times_table - print n times table from 0
 * @n: number to determine times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int a = 0, b, t;

	if (n < 0 || n > 15)
		return;
	while (a < n + 1)
	{
		b = 0;
		while (b < n + 1)
		{
			t = a * b;
			if (b == 0)
				_putchar(t + '0');
			else if (t < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(t + '0');
			}
			else if (t < 100)
			{
				_putchar(' ');
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
			}
			else
			{
				_putchar(t / 100 + '0');
				_putchar((t - 100) / 10 + '0');
				_putchar(t % 10 + '0');
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
