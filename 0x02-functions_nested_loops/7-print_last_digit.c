#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: function parameter
 * Return: a
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (n < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
