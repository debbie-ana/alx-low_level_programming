/**
 * wildcmp - compares two strings to see if they are identical
 * @s1: first string
 * @s2: second string
 *
 * Description - s2 can contain the special character *
 * The special char * can replace any string (including an empty string)
 * Return: 1 if strings are considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
