#include "main.h"

/**
 * _abs - compute absolute value of an integer
 * @n: integer to be computed
 *
 * Return: absolute value of integer
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
