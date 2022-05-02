#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument counter
 * @argv: array of strings
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
