#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function tht returns a pointer toa newly allocated
 *		space in memory and contains a copy of the
 *		given string
 *@str: string given
 *
 * Return: Returns a pointer to string
 */
char *_strdup(char *str)
{
	int *ptr, i, size;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	/* +1 space for '\0' */
	ptr = malloc((sizeof(*str) * i) + 1);

	for (size = 0; size < i; size++)
		ptr[size] = str[size];

	return (ptr);
}
