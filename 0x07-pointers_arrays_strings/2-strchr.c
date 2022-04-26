/**
 * strchr - locates a character in a string
 * @s: string
 * @c: character to be located
 *
 * Return: pointer to first occurrence of the character in the string s
 * or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
