#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * *_realloc - Reallocates a memory block that was dynamically
 *		allocaed with malloc
 * @ptr: pointer to the previously allocated block og memory
 * @old_size: size of old memory block in bytes
 * @new_size: size to the new memory to be reallocated
 *
 * Return: Returns a pointer to the new memory location if ptr is null
 *	or pointer to new memory location if new_size is greter
 *	than old size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (!(new_size))
	{
		if (ptr)
			free(ptr);

		return (NULL);
	}

	else if (!(ptr))
		return (malloc(new_size));

	else if (new_size <= old_size)
		return (ptr);

	else
	{
		new_ptr = malloc(new_size);
		if (!(new_ptr))
			return (NULL);

		else
		{
			_memcpy(new_ptr, ptr, old_size);
			free(ptr);
		}
		return (new_ptr);
	}

}


/**
 * *_memcpy - copies data from one memory location to another
 *  @dest: new memory to copy data to
 *  @src: old memory to copy data from
 *  @n: number of byte of old memory space
 *
 *  Return: Return location to new memory
 */
void *_memcpy(void *dest, void *src, size_t n)
{
	size_t i;

	char *my_dest = dest;
	char *my_src = src;

	for (i = 0; i < n; i++)
	{
		*(my_dest + i) = *(my_src + i);
	}
	return (my_dest);
}
