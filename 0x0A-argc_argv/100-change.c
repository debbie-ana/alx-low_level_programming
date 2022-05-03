#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: array of strings
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int cent, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	while (cent > 0)
	{
		if (cent % 25 < cent)
		{
			cent -= 25;
			coins++;
		}
		else if (cent % 10 < cent)
		{
			cent -= 10;
			coins++;
		}
		else if (cent % 5 < cent)
		{
			cent -= 5;
			coins++;
		}
		else if (cent % 2 < cent)
		{
			cent -= 2;
			coins++;
		}
		else if (cent % 1 < cent)
		{
			cent -= 1;
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
