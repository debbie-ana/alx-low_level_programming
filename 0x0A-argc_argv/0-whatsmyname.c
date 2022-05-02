#include <stdio.h>
/**
 * main - prints the prints the program name
 * @argc: argument count
 * @argv: one dimensional array of strings
 *
 * Return: integer value, 0 for success and other numbers for failure
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
