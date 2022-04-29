/**
 * _strlen_rec - returns length of string using recursion
 * @s: string
 *
 * Return: length of string
 */

int _strlen_rec(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_rec(s + 1));
}

/**
 * compare - compares string with reverse of the string
 * @s: string to be compared
 * @n: length of string
 *
 * Return: 0 if string is not the same with its reverse
 * 1 if string and its reverse are the same
 */

int compare(char *s, int n)
{
	if (n <= 0)
		return (1);
	if (*s == *(s + (n - 1)))
		return (compare(s + 1, n - 2));
	else
		return (0);
}

/**
 * is_palindrome - checks if a given string is a palindrome
 * @s: string
 *
 * Return: 0 if string is not a palindrome
 * 1 if string is a palindrome
 */

int is_palindrome(char *s)
{
	int len = _strlen_rec(s);

	return (compare(s, len));
}

