#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed
 * @...: variable number of parameters to calculate sum of
 * Return: If n == 0, return 0 or sum of paramters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int b, c = 0;

	va_start(a, n);

	for (b = 0; b < n; b++)
		c += va_arg(a, int);

	va_end(a);

	return (c);
}
