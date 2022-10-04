#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * **alloc_grid - function returns a pointer to a 2 dimensional
 *		arrays of integer
 * @width: numbr of columns
 * @height: number of rows
 *
 * Return: Returns a pointer to a 2-dimensional array
 */
int **alloc_grid(int width, int height)
{
	int j, i, **ptr;

	ptr = malloc(sizeof(*ptr) * height);

	if (ptr == 0 || width == 0 || height == 0)
		return (NULL);

	else
	{
		for (i = 0; i < height; i++)
		{
			ptr[i] = malloc(sizeof(**ptr) * width);

			if (ptr[i] == NULL)
			{
				/*Free everything if malloc fails */
				while (i--)
					free(ptr[i]);
				free(ptr);
				return (NULL);
			}

			for (j = 0; j < width; j++)
				ptr[i][j] = 0;
		}
	}
	return (ptr);
}
