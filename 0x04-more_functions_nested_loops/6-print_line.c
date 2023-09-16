#include "main.h"

/**
 * print_line - function draws a straight line in the terminal
 * @n: parameter
 * Return: void
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n > 0)
			_putchar('_');
		else
			break;
	}
	_putchar('\n');
}
