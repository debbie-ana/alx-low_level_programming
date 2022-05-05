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
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Description - The returned pointer should point to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * Return: NULL on failure else pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	int a, b;
	int i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	a = _strlen(s1);
	b = _strlen(s2);
	str = malloc((a + b + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
		str[i] = s1[i];
	for (j = 0; j < b; i++, j++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
