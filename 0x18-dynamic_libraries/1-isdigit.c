#include "main.h"

/**
 * _isdigit - check if character is a number
 * @c: character to be checked
 *
 * Return: 1 if character is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
