#include "main.h"

/**
 * print_last_digit - prints last digit
 * of a number
 * @n: number to get the last digit from
 *
 * Return: integer(last digit)
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		ld = ((-1 * n) % 10);
	else
		ld = n % 10;
	_putchar('0' + ld);
	return (ld);
}
