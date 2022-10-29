#include "main.h"

/**
 * get_bit - function returns the value of a bit at a given index.
 * @n: bit of numbers.
 * @index: position of bit value to get.
 *
 * Return: returns value of bit at index or
 *		-1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > (sizeof(unsigned int long) * 8))
		return (-1);

	num = ((n & (1 << index)) >> index);
	return (num);
}
