#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - return 2 dimensional array of integers
 * @width: width parameter
 * @height: height parameter
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int c, d;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (c = 0; c < height; c++)
	{
		a[c] = malloc(sizeof(int) * width);

		if (a[c] == NULL)
		{
			for (; c >= 0; c--)
				free(a[c]);

			free(a);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
			a[c][d] = 0;
	}
	return (a);
}
