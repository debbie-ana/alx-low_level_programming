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

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string to be joined to dest
 *
 * Return: dest which src has been joined to
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
		dest[n + i] = src[i];
	dest[n + i] = '\0';
	return (dest);
}
