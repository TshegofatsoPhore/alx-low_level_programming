#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: parameter1
 * @src: parameter2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0;
	int slen = 0;
	int a;

	for (a = 0; dest[a] != '\0'; a++)
		dlen++;
	for (a = 0; src[a] != '\0'; a++)
		slen++;
	for (a = 0; a <= slen; a++)
		dest[dlen + a] = src[a];

	return (dest);
}
