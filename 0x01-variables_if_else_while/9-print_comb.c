#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - printing all possible combinations
 * of single digit numbers using only putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 48;
	/* using variable num to represent number*/

	while (num < 58)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
		num = num + 1;
	}
	putchar('\n');
	return (0);
}
