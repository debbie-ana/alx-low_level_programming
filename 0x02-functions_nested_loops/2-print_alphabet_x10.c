#include "main.h"

/**
 * print_alphabet_x10 - print all alphabets
 * ten times ending with a newline
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char ltr;
	int i = 0;

	while (i < 10)
	{
		ltr = 'a';
		while (ltr <= 'z')
		{
			_putchar(ltr);
			ltr++;
		}
		_putchar('\n');
		i++;
	}
}
