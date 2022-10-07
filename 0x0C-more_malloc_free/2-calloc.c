#include <stdio.h>
#include <stdlib.h>
#include <main.h>

/**
 * *_calloc - allocates memory for an array and initializes it to zero
 * @nmemb: numberof array elements
 * @size: size of each array element
 *
 * Return: Returns NULL if nmemb, size is zero or malloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);
	return (ptr);
}


/**
 * _memset - initializes an array to zero
 * @s: array to initialize to zero
 * @b: value to initialize the array with
 * @n: size of array
 *
 * Return: Returns array initialized withvalue of b
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char **ptr;

	ptr = s

	while (n--)
		*ptr++ = b;
	return (ptr);
}

