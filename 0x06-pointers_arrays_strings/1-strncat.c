/**
 * _strncat - concatenate two strings using at most
 * n bytes from src
 * @dest: first string
 * @src: second string joined to dest
 * @n: number of bytes of src to be joined to dest
 *
 * Return: concatenated string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (*(dest + len) != '\0')
		len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
