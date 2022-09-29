#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check
 *
 * Return: Returns 1 if n is a prime number
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n < 4)
		return (1);
	else
		return (help_prime(n, 2));
}

/**
 * _sqrt_root - helps to find the root of n
 * @n: number whose root is to be found
 * @l: incrememt value
 *
 * Return: returns l
 */
int _sqrt_root(int n, int l)
{
	int square;

	square = l * l;
	if (square >= n)
		return (l);
	else
		return (_sqrt_root(n, l + 1));
}


/**
 * help_prime - helps to check if a number is a factor of n
 * @n: number to check
 * @m: divisor to check if n is divisble
 *
 * Return: returns 1 if n isnt divisible
 */
int help_prime(int n, int m)
{
	if (n % m == 0)
		return (0);
	else if (_sqrt_root(n, 1) < m)
		return (1);
	else
		return (help_prime(n, m + 1));
}

