#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: parameter of string
 * @c: character to locate
 * Return: char or null
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] >= '\0')
	{
		if (s[a] == c)
			return (s + a);
		a++;
	}
	return ('\0');
}
