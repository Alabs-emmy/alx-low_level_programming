#include "function_pointers.h"

/**
 * int_index - function searches for integers in an array
 * @size: size of the array that contains the integers
 * @array: array of the integers to search from
 * @cmp: pointer to the function used to compare the values
 *	of integer searched from the array
 *
 * Return: Returns the index of the first array element which does not
 *		return 0 after been compared else
 *		return -1 if no element of array matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (!(array) || !(cmp))
		return (-1);

	if (size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);

}
