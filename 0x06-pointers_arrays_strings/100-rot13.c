/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	char *r = s;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
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
		}
		s++;
	}
	return (r);
}
