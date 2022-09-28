#include "main.h"

/**
 * _pow_recursion - functions that calculate the power of a number
 * @x: value to find the power of
 * @y: value to power to be raised to
 *
 * Return: Returns x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, (y - 1)));
}
