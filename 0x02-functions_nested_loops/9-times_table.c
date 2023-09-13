#include "main.h"

/**
 * times_table - prints multiplication table from 0 to 9
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;

			if (c < 10)
			{
				_putchar(' ');
				_putchar(c + '0');
				_putchar(',');
				_putchar(' ');
			} else if (c >= 10)
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}