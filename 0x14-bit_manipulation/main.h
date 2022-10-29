#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>

 /*
 * Desc: Header file containing prototypes for all functions written
 *	in the 0x14-bit_manipulation directory
 */

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);

#endif /* _MAIN_H */
