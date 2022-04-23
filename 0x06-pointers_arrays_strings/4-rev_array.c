/**
 * reverse_array - reverse an array of integers
 * @a: array to be reversed
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
		j++;
		i--;
	}
}
