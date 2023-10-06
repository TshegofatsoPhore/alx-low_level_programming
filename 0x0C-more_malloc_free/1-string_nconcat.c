#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string parameter1
 * @s2: string parameter2
 * @n: parameter for size in bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int c = 0, d = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		a = malloc(sizeof(char) * (len1 + n + 1));
	else
		a = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!a)
		return (NULL);

	while (c < len1)
	{
		a[c] = s1[c];
		c++;
	}

	while (n < len2 && c < (len1 + n))
		a[c++] = s2[d++];

	while (n >= len2  && c < (len1 + len2))
		a[c++] = s2[d++];

	a[c] = '\0';
	return (a);
}
