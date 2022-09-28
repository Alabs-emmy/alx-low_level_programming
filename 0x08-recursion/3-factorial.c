#include "main.h"

/**
 * factorial - returns the fctorial of a number
 * @n: number whose factorial is to be calculated
 *
 * Return: returns the factorial of a number
 */
int factorial(int n)
{
	if (n <= 0)
		return (-1);
	else if (n < 2)
		return (1);
	return (n * factorial(n - 1));

}
