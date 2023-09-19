#include "main.h"

/**
 * print_rev - function prints string in reverse
 * @s: parameter
 * Return: void
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	for (a--; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
