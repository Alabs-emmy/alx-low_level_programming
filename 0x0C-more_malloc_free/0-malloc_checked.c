#include <stdlib.h>
#include <stdio.h>
#include  "main.h"

/**
 * *malloc_checked - pointer that allocates memory of
 *			size of "b" using mallloc
 * Description: if malloc fails, terminate the process with status 98.
 * @b: size of memory to allocate
 *
 * Return: Returns a pointer of type "void" to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);

}
