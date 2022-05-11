#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: int
 */

int main()
{
#ifdef __FILE__
	printf("%s\n", __FILE__);
#endif
	return (0);
}
