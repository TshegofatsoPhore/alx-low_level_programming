#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function frees 2d array
 * @grid: 2d array parameter
 * @height: height parameter
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
