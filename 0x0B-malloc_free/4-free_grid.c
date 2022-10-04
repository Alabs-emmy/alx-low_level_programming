#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - functions free the space for a 2-dimensional grid
 * @grid: pointer that points to the pointer
 * @height: number of rows
 *
 * Return: Always 1
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
