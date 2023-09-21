#include "main.h"

/**
 * *string_toupper - function changes lowercase characters to uppercase
 * @str: strint parameter
 * Return: char
 */
char *string_toupper(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] - 32;
		a++;
	}
	return (str);
}
