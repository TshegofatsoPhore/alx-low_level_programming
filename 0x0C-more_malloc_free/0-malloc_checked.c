#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function allocates memory using malloc
 * @b: parameter for size of bytes
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}