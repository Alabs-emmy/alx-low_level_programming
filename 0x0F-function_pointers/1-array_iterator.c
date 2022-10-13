#include "function_pointers.h"

/**
 * array_iterator - function executes a specific function on each element
 *			of an array
 * @array: pointer to the array to execute function on
 * @size: size of the array
 * @action: pointer to the function to be executed on the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (!(array) || !(action))
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
