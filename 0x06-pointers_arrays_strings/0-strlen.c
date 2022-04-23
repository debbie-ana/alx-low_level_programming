/**
 * _strlen - get length of a string
 * @s: string to get length
 *
 * Return: length of string
 */

char *_strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
