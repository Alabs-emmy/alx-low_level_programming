#include "main.h"

/**
 * binary_to_unit - function that converts a binary number to an
 *			unsigned int.
 * @b: pointer to the string of binary number.
 *
 * Return: Returns 0 if there is one or more chars in the
 *		string b that is not 0 or 1 or if b is NULL.
 *		otherwise the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num;
	int i;

	dec_num = 0;

	if (b == NULL)
		return (0);

	i = 0;
	while (b[i] == '0' || b[i] == '1')
	{
		dec_num <<= 1;
		dec_num += b[i] - '0';
		i++;
	}
	return (dec_num);

}
