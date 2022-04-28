/**
 * check - checks for prime number given starting and ending value
 * to check with
 * @a: starting value to check if number is prime
 * @b: end value
 * @n: number to be checked
 *
 * Return: 0 if number is not prime, 1 otherwise
 */

int check(int a, int b, int n)
{
	if (b >= a)
	{
		if (n % a == 0)
			return (0);
		else
			return (check(a + 1, b, n));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if number is prime
 * @n: number to be checked
 *
 * Return: 0 if n is not prime, 1 otherwise
 */

int is_prime_number(int n)
{
	int mid;

	if (n < 1)
		n *= -1;
	if (n == 1)
		return (0);
	mid = n / 2;
	check(2, mid, n);
}
