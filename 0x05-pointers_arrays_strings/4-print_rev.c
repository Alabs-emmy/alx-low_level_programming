#include "main.h"

/**
 * print_rev - prints a string in reverse mode to the stdout
 * @s: params
 *
 */
void print_rev(char *s);
{
	int i, sum;

	sum = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		sum++;
	}
	sum--;
	while (sum >= 0)
	{
		_putchar(s[sum]);
		sum--;
	}
	_putchar('\n');
}
