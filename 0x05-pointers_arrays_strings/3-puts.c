#include "main.h"

/**
 * _puts - prints a string followed by a newline to stdout
 * @str: params
 *
 */
void _puts(char *str)
{
	for (int i = 0; str != '\0'; i++)
	{
		_putchar(str[i]);
	}
	putchar('\n');
}
