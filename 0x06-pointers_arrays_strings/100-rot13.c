/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	char *r = s;
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	char b[] = "nopqrstuvwxyzabcdefghijklm";
	int i = 0;

	while (*s)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if (*s == a[i])
			{
				*s = b[i];
				break;
			}
			if (*s == a[i] - 32)
			{
				*s = b[i] - 32;
				break;
			}
		}
		s++;
	}
	return (r);
}
