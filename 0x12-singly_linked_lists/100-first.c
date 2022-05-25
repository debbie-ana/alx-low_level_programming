#include <stdio.h>

void f(void) __attribute__ ((constructor));

/**
 * f - prints before main function is executed
 *
 * Return: void
 */

void f(void)
{
	printf("You're beat! and yet, you must allow, \n");
	printf("I bore my house upon my back!\n");
}
