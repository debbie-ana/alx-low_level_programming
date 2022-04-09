#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - printing numbers 0 to 9
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;
	/* using variable num to represent number*/

	while (num < 10)
	{
		printf(num);
		num = num + 1;
	}
	printf('\n');
	return (0);
}
