#include "main.h"
#include <stdio.h>

/**
 * main - printing numbers 1 to 100
 *
 * Description: put Fizz for multiples of 3
 * Buzz, for multiples of 5 and FizzBuzz for multiples of both 3 and 5
 * Return: 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
