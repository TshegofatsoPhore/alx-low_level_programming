#include <stdio.h>

/**
 * main - Entry point
 *
 * Programme that prints various types sizes
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char type1;
	int type2;
	float type3;
	long int type4;
	long long int type5;

	printf("Size of a char: %zu bytes\n", sizeof(type1));
	printf("Size of an int: %zu bytes\n", sizeof(type2));
	printf("Size of a long int: %zu bytes\n", sizeof(type4));
        printf("Size of a long long int: %zu bytes\n", sizeof(type5));
	printf("Size of a float: %zu bytes\n", sizeof(type3));
	return (0);
}
