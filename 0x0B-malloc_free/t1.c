#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns length of string
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strdup - returns a pointer to a new string which is a duplicate of str
 * @str: string to be duplicated
 *
 * Description - memory for new string is obtained using malloc
 * On success, the _strdup function returns a pointer to the
 * duplicated string, returns NULL if insufficient memory was available
 * Return: NULL if str is NULL or pointer to duplicated string
 */

char *_strdup(char *str)
{
	int len = _strlen(str);
	char *a = malloc((len + 1) * sizeof(char));
	int i;

	if (str == NULL || a == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		a[i] = str[i];
	a[i] = '\0';
	return (a);
}
