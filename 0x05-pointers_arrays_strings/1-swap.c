#include "main.h"

/**
 * swap_int - function swaps the value of two integers
 * @a: parameter1
 * @b: parameter2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
