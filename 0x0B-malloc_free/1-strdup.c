#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - duplicates to new space in memory
 * @str: string parameter
 * Return: 0
 */
char *_strdup(char *str)
{
	char *a;
	int f = 0;
	int g;

	if (str == NULL)
		return (NULL);
	while (str[f] != '\0')
		f++;

	a = malloc(sizeof(char) * (f + 1));

	if (a == NULL)
		return (NULL);
	for (g = 0; str[g]; g++)
		a[g] = str[g];
	return (a);
}
