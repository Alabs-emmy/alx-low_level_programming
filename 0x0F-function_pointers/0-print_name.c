#include "main.h"

/**
 * print_name - function takes in a string and a function pointer to print
 *		a name
 * @name: name to print
 * @f: A pointer to a function that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!(name) || !(f))
		return (NULL);

	(*f)(name);
}
