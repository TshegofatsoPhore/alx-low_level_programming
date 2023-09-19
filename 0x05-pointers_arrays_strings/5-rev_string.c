#include "main.h"

/**
 * rev_string - function reverses a string
 * @s: parameter
 * Return: void
 */
void rev_string(char *s)
{
	int a, b;
	char temp;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a / 2; b++)
	{
		temp = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = temp;
	}
}
