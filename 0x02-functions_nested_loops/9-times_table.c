#include "main.h"

/**
 * times_table - print the times table from 0 to 9
 *
 * Return: void
 */

void times_table(void)
{
	int a = 0;
	int b;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			int t = a * b;

			if (b == 0)
			{
				_putchar('0' + t);
			}
			else if (t < 10)
			{
				_putchar(' ');
				_putchar(t + '0');
			}
			else
			{
				_putchar((t / 10) + '0');
				_putchar((t % 10) + '0');
			}
			if (b < 9)
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
