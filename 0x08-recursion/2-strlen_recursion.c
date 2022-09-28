#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: string to check the length
 *
 * Return: returns c
 */
int _strlen_recursion(char *s)
{
	int c;

	c = 0;
	if (*s == '\0')
		return 0;

	c = 1 + _strlen_recursion(++s);
	return (c);
}
