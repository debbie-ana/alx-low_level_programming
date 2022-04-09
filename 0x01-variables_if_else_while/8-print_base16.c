#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - printing all numbers in base 16
 * in lowercase using only putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	/* using variable num to represent number*/

	while (num < 16)
	{
		if (num < 10)
		{
			putchar(num + 48);
			num = num + 1;
		}
		else
		{
			putchar(num - 10 + 'a');
			num = num + 1;
		}
	}
	putchar('\n');
	return (0);
}
