#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - prints character
 * @c: character to print
 *
 * Return: void
 */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - prints string
 * @s: string to print
 *
 * Return: void
 */

void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (s == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_i - prints integer
 * @i: integer to print
 *
 * Return: void
 */

void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * print_f - prints float
 * @f: float number to print
 *
 * Return: void
 */

void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * c for char, i for int, f for float, s for char *
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_a p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list ap;
	char *sep = "";

	va_start(ap, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].a != NULL)
		{
			if (*(p[j].a) == format[i])
			{
				printf("%s", sep);
				p[j].f(ap);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
