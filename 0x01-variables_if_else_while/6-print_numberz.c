#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - printing numbers 0 to 9
 * using only putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 48;
	/* using variable num to represent number*/

	while (num < 58)
	{
		putchar(num);
		num = num + 1;
	}
	putchar('\n');
	return (0);
}
