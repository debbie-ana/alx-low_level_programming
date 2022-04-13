#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing the first 50 fibonacci numbers starting from 1 and 2
 * Return: Always 0
 */

int main(void)
{
	int n = 0;
	long int a = 0, b = 1, num;

	while (n < 50)
	{
		num = a + b;
		printf("%lu", num);
		a = b;
		b = num;
		if (n < 49)
			printf(", ");
		n++;
	}
	putchar('\n');
	return (0);
}
