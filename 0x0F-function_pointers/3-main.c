#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int a, b;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (strcmp(argv[2], "+") && strcmp(argv[2], "-") &&
			strcmp(argv[2], "*") && strcmp(argv[2], "/")
			&& strcmp(argv[2], "%"))
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "%") == 0 || strcmp(argv[2], "/") == 0) && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);
	return (0);
}
