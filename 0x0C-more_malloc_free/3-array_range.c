#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum element value of array
 * @max: maximum element value of array
 *
 * Return: Returns NULL if min greater than max or malloc fails
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min == NULL || max == NULL)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (ptr);

	for (i = 0; min <= max; i++)
		*(ptr + i) = min++;

	return (ptr);
}
