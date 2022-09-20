#include "main.h"

/**
 * swap_int - takes two variables and swap thier number to each other
 * @a: pointer
 * @b: pointer
 *
 */
void swap_int(int *a, int *b)
{
int swap = *a;
*a = *b;
*b = swap;
}

