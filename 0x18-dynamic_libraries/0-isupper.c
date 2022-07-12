#include "main.h"

/**
 * _isupper - checks if letter is uppercase or not
 * @c: decimal value of character to be checked
 *
 * Return: 1 if character is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
