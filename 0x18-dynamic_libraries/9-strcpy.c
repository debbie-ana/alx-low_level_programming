/**
 * _strcpy - copies a string
 * @src: string to be copied i.e source
 * @dest: pointer to buffer i.e destination for copied string
 *
 * Return: void
 */

void *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
