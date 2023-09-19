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
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
