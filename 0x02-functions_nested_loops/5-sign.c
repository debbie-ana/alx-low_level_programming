#include "main.h"

/**
 * print_sign - printing the sign of a number
 * @n: number whose sign us printed
 *
 * Return: 1, 0 or -1 if number is
 * positive, zero or negative respectively
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar('1');
		return (-1);
	}
}
