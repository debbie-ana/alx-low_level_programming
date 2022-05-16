#ifndef VF_H
#define VF_H
#include <stdarg.h>

typedef struct print
{
	char *a;
	void (*f)(va_list);
} print_a;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
