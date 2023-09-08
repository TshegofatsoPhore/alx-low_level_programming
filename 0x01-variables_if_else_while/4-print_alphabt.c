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

	for (lowerChar = 'a'; lowerChar <= 'z'; lowerChar++)
	{
		if (lowerChar == 'e')
		{
			continue;
		} else if (lowerChar == 'q')
		{
			continue;
		}
		putchar(lowerChar);
	}
	putchar('\n');
	return (0);
}
