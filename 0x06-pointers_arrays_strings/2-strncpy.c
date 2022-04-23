/**
 * _strncpy - copies n bytes of src string to dest
 * @dest: first string
 * @src: string copied to dest
 * @n: number of characters to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
