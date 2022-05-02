/**
 * _strlen - returns length of a string
 * @s: string
 *
 * Return: integer which is length of string
 */

int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		n++;
	return (n);
}
