#include <stdio.h>

/**
 * main - Entry point
 *
 * Print out numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(48 + digit);
	}
	putchar('\n');
	return (0);
}
