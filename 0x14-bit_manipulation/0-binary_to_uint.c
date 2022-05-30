#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 chars
 *
 * Return: converted number, or 0 if b is NULL
 * or there is one or more chars in string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i, j;
	int a;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (j = 0; j < i; j++)
	{
		if (b[j] == '1')
		{
			a = i - j - 1;
			num += (1 << a);
			/*this is equivalent to 2 raised to power a*/
		}
		else
			num += 0;
	}
	return (num);
}
