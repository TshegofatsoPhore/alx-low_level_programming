#include "main.h"

/**
 * print_alphabet_x10 - prints set of alphabets ten times
 *
 * Return: 0.
 */
void print_alphabet_x10(void)
{
	char lowerChar = 'a';
	int num;

	for (num = 0; num < 10; num++)
	{
		for (lowerChar = 'a'; lowerChar <= 'z'; lowerChar++)
		{
			_putchar(lowerChar);
		}
		_putchar('\n');
	}
}

