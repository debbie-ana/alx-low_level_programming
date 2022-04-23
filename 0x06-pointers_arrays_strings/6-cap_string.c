/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to string
 *
 * Return: pointer to capitalized string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		if (s[i] == 9 || s[i] == 10 || s[i] == 32 || s[i] == 33
				|| s[i] == 34 || s[i] == 40 || s[i] == 41
				|| s[i] == 44 || s[i] == 46 || s[i] == 59
				|| s[i] == 63 || s[i] == 123 || s[i] == 125)
		{
			if (s[i + i] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
