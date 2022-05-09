#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: pointer to firts string
 * @s2: pointer to second string
 * @n: n bytes of s2 to be added to s1
 *
 * Return: pointer to newly allocated space in memory containing
 * s1 followed by first n bytes of s2 then '\0' or NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	s = malloc((len1 + n) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; i++, j++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}
