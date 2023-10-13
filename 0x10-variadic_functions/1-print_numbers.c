#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of arguments passed
 * @...: varible of numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int b;

	va_start(a, n);

	for (b = 0; b < n; b++)
	{
		printf("%d", va_arg(a, int));

		if (b != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(a);
}
