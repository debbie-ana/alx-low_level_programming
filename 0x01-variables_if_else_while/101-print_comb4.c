#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - printing possible combinations
 * of 3 single digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j;
	int k;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;
			while (k < 10)
			{
				if (i != j && j != k && i < j && j < k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
