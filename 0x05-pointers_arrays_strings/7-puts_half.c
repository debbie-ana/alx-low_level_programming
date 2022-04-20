#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string used
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, n;

	while (str[i])
		i++;
	if (i % 2 == 0)
	{
		n = i / 2;
		for (; n < i; n++)
			_putchar(str[n]);
	}
	else
	{
		for (n = (i - 1) / 2; n < i - 1; n++)
			_putchar(str[n + 1]);
	}
	_putchar('\n');
}
