/**
 * isqrt - checks for the square root of a number
 * @a: number to start with to check
 * @b: number whose square root is to be gotten
 *
 * Return: square root if square root is natural number, -1 otherwise
 */
int isqrt(int a, int b)
{
	if (a * a == b)
	{
		return (b);
	}
	else if (a * a > b)
	{
		return (-1);
	}
	return (isqrt(a + 1, b));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to get square root of
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	return (isqrt(2, n));
}
