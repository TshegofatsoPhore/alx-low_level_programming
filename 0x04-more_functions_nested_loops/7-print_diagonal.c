#include "main.h"

/**
 * print_diagonal - function draws a diagonal line on the terminal
 * @n: parameter
 * Return: void
 */
void print_diagonal(int n)
{
	/*int a, b;*/

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a < n; a++)
		{
			for (b = 0; b <= a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
