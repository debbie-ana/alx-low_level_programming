#include "main.h"

/**
 * _puts -  prints a string followed by a newline
 * @str: string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		_putchar(s[n]);
		n++;
	}
	_putchar('\n');
}
