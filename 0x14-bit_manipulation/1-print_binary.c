#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int a;
	int i = 31, j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	a = 1 << i;
	while (n < a)
	{
		i--;
		a = 1 << i;
	}
	/*(1 << i is equivalent to 2 raised to power i*/
	for (; i >= 0; i--)
	{
		j = n >> i;
		if (j & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
