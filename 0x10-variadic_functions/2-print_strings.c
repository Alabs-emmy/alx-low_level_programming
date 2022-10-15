#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - This function prints strings then a new line
 * @separator: pointer to the string to be printed between the strings
 * @n: The number of string passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list string_arg;

	va_start(string_arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string_arg, char *);
		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string_arg);
}
