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
	char lowerChar = 'a';
	char upperChar = 'A';

	for (lowerChar = 'a'; lowerChar <= 'z'; lowerChar++)
	{
		putchar(lowerChar);
	}
	for (upperChar = 'A'; upperChar <= 'Z'; upperChar++)
	{
		putchar(upperChar);
	}
	putchar('\n');
	return (0);
}
