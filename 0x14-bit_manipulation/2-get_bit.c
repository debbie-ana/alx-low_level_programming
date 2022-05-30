#include "main.h"

/*
 * get_bit - returns value of a bit at a given index
 * @n: number
 * @index: index of bit you want to get, starting from 0
 *
 * Return: value of bit at index or -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	while (i < index)
	{
		n /= 2;
		i++;
	}
	if (n % 2 == 1)
		return (1)
	else
		return (0);
	return (1);
}
