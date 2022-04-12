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
	int ld = n % 10;

	if (ld < 0)
		ld = ld * -1;
	_putchar('0' + ld);
	return (ld);
}
