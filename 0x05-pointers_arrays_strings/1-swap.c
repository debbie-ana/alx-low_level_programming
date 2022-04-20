/**
 * swap_int - swap value of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int m = *a;
	int n = *b;

	*a = n;
	*b = m;
}
