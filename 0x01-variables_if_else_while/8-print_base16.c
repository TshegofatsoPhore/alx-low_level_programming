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
	int baseNum = 0;
	char lowerChar = 'a';

	for (baseNum = 0; baseNum < 10; baseNum++)
	{
		putchar(48 + baseNum);
	}
	for (lowerChar = 'a'; lowerChar < 'g'; lowerChar++)
	{
		putchar(lowerChar);
	}
	putchar('\n');
	return (0);
}
