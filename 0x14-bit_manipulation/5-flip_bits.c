#include "main.h"

/**
 * flip_bits - function that counts the number of bits to flip
 *		to get from one number to another.
 * @n: first number
 * @m second number to flip n to
 *
 * Return: returns the count of number flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_num = n ^ m, bits = 0;

	while (xor_num > 0)
	{
		bits += (xor_num & 1);
		xor_num >>= 1;
	}
	return (bits);
}
