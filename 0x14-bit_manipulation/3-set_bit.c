#include "main.h"

/**
 * set_bit - function sets the value of a bit at an index to 1.
 * @n: pointer to the string of bits.
 * @index: position of bit which values needs to be changed.
 *
 * Return: returns 1 if it works
 *		-1 if an error occurred.
 */
int set_bit(unsigned long *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
