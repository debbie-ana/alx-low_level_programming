/**
 * isqrt - checks for the square root of a number
 * @start: number to start with to check
 * @end:  number to end with to check
 * @n: number whose square root is to be gotten
 *
 * Return: square root if square root is natural number, -1 otherwise
 */
int isqrt(int start, int end, int n)
{
	int mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == n)
			return (mid);
		if (mid * mid > n)
			return (isqrt(start, mid - 1, n));
		if (mid * mid < n)
			return (isqrt(mid + 1, end, n));
	}
	return (-1);
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
	return (isqrt(2, n, n));
}
