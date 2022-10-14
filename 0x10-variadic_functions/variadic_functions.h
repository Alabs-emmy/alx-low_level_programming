#ifndef _VARIADIC_FUNCION_H
#define _VARIADIC_FUNCTION_H

/**
 * file: variadic.h
 * desc: Header file for the functions used in the
 * 		0x10-variadic_function directory
 */

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

#endif /* _VARIADIC_FUNCTION_H */
