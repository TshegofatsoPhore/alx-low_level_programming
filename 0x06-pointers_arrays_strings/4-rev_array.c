#include "main.h"

/**
 * reverse_array - function that reverses the contents of an array
 * @a: array parameter
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int space, b;

	for (b = 0; b < n--; b++)
	{
		space = a[b];
		a[b] = a[n];
		a[n] = space;
	}
}
