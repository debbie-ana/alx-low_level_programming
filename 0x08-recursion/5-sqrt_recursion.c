/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to get square root of
 *
 * Return: square root
 */
int isqrt(int k, int n);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	return (isqrt(1, n));
}

/**
 * isqrt - checks for the square root of a number
 * @k: number to start with to check
 * @n: number whose square root is to be gotten
 *
 * Return: square root if square root is natural number, -1 otherwise
 */

int isqrt(int k, int n)
{
	int next = (k + n / k) / 2;

	if (k * k <= n && (k + 1) * (k + 1) > n)
	{
		if ((k * k) == n)
			return (k);
		return (-1);
	}
	else
	{
		return (isqrt(next, n));
	}
}
