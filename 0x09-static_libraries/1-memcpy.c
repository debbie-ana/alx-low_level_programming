/**
 * _memcpy - copies memory area
 * @dest: where it is copied to
 * @src: sorce to be copied from
 * @n: number of bytes to copy from memory area
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		dest[n] = src[n];
	return (dest);
}
