#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string to be printed in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
