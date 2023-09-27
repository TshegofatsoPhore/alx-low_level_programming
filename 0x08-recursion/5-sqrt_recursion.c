#include "main.h"

/**
 * root - return the natural square root
 * @a: input number
 * @b: iterator
 * Return: square 0r -1
 */
int root(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (root(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: square root
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (root(n, 0));
}
