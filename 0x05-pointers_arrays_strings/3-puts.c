#include "main.h"

/**
 * _puts - function prints a string
 * @str: parameter
 * Return: void
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
