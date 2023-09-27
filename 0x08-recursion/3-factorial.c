#include "main.h"

/**
 * factorial - return factorial of a given number
 * @n: integer parameter
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
