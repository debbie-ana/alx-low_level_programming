#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip to get m from n
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a, b = 0;

	a = n ^ m;
	while (a > 0)
	{
		b += (a & 1);
		a = a >> 1;
	}
	return (b);
}
