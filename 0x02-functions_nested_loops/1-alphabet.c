#include "main.h"

/**
 * print_alphabet - Programme print alphabets in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char lowerChar = 'a';

	for (lowerChar = 'a'; lowerChar <= 'z'; lowerChar++)
	{
		_putchar(lowerChar);
	}
	_putchar('\n');
}
