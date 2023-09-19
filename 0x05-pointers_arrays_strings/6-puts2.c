#include "main.h"

/**
 * puts2 - function prints a string
 * @str: parameter
 * Return: void
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 1)
			continue;
		else
		_putchar(str[a]);
	}
	_putchar('\n');
}
