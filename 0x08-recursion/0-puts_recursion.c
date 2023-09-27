#include "main.h"

/**
 * _puts_recursion - prints a string followed by anew line
 * @s: literal parameter of a string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
