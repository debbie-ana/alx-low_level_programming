/**
 * _strstr - locates a substring in a given string
 * @haystack: string
 * @needle: substring
 *
 * Description - The _strstr() function finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *b = needle;

	while (*a)
	{
		a = haystack;
		b = needle;
		while (*b)
		{
			if (*a++ != *b++)
				break;
		}
		if (*b == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
