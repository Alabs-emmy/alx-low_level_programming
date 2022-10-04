#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of char
 *		and initializes it with a specific char
 * @size: size of array to be created
 * @c : char to fill array with
 *
 * Return: Returns a pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == 0)
		return (NULL);

	while (size--)
		*ptr++ = c;

	return (ptr);
}
