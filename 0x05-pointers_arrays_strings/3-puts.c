#include "main.h"

/**
 * _puts - prints a string followed by a newline to stdout
 * @str: params
 *
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
