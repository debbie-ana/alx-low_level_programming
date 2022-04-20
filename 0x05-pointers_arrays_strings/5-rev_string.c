/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, len = 0;
	int n;

	while (s[len])
		len++;
	n = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		char c = s[i];

		s[i] = s[n];
		s[n--] = c;
	}
}
