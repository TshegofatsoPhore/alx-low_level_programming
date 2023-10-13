#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string that separates the other strings
 * @n: number of arguments passed
 * @...: variable number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	char *b;
	unsigned int c;

	va_start(a, n);

	for (c = 0; c < n; c++)
	{
		b = va_arg(a, char *);

		if (b == NULL)
			printf("(nil)");
		else
			printf("%s", b);

		if (c != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(a);
}
