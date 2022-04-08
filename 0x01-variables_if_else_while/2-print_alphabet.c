#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - printing lowercase alphabets
 * using only putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ltr = 'a';
	/* using variable ltr to represent letter*/

	while (ltr <= 'z')
	{
		putchar(ltr);
		ltr = ltr + 1;
	}
	putchar('\n');
	return (0);
}
