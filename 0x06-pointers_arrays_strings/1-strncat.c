#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: parameter1
 * @src: parameter2
 * @n: parameter3
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int a;

	for (a = 0; dest[a] != '\0'; a++)
		dlen++;

	for (a = 0; a < n && *src != '\0'; a++)
	{
		dest[dlen + a] = *src;
		src++;
	}
	dest[dlen + a] = '\0';

	return (dest);
}
