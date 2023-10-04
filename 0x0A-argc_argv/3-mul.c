#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string parameter to be converted
 * Return: int
 */
int _atoi(char *s)
{
	int a, b, c, len, d, digit;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	d = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && d == 0)
	{
		if (s[a] == '_')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}

/**
 * main - program multiplies two numbers and prints results
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int prod, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		prod = num1 * num2;
		printf("%d\n", prod);
	}
	return (0);
}
