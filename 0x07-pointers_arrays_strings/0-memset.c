#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: parameter1 memory area to be filled
 * @b: parameter2 char to copy
 * @n: parameter3 number of times to copy
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
