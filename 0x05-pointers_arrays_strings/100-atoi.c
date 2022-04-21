/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: integer gotten from converted string
 */

int _atoi(char *s)
{
	int sign;
	unsigned int num;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}
