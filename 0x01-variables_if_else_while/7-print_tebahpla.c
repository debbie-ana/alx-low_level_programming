#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - printing lowercase alphabets
 * in reverse using only putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ltr = 'z';
	/* using variable ltr to represent letter*/

	while (ltr <= 'z' && ltr >= 'a')
	{
		putchar(ltr);
		ltr = ltr - 1;
	}
	putchar('\n');
	return (0);
}
