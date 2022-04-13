#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing sum of even valued terms in Fibonacci sequence
 * whose values do not exceed 4000000
 * Return: Always 0
 */

int main(void)
{
	int a = 0, b = 1, num = 0;
	int sum = 0;

	while (num < 4000000)
	{
		num = a + b;
		a = b;
		b = num;
		if (num % 2 == 0)
			sum += num;
	}
	printf("%i\n", sum);
	return (0);
}
