#include "main.h"

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
