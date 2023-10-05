#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string parameter1
 * @s2: string parameter2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *added;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	added = malloc(sizeof(char) * (a + b + 1));

	if (added == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		added[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		added[a] = s2[b];
		a++, b++;
	}
	added[a] = '\0';
	return (added);
}
