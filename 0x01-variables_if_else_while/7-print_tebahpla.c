#include <stdio.h>

/**
 * main - Entry point
 *
 * Print out alphabets in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerChar = 'z';

	for (lowerChar = 'z'; lowerChar >= 'a'; lowerChar--)
	{
		putchar(lowerChar);
	}
	putchar('\n');
	return (0);
}
