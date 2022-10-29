#include "main.h"

/**
 * clear_bit - function sets the value of a bit at a given index to 0.
 * @n: pointer to bits
 * @index: position of bit whoose value is to be changed.
 *
 * Return: return 1 if it works
 *	-1 if an occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
