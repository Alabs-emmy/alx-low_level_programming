#include "main.h"

/**
 * _sqrt_recursion - provides the natura square root of a number
 * @n: number to find its square root
 *
 * Return: returns the square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (help(n, 1));
}



/**
 * help - helping function that helps to validate the square root of a number
 * @n: number whose root to be found
 * @i: incrementing parameter
 *
 * Return: Returns the root of n
 */
int help(int n, int i)
{
	int square;

	square = i * i;
	if (square == n)
		return (i);
	else if (square < n)
		return (help(n, (i + 1)));
	else
		return (-1);
}
