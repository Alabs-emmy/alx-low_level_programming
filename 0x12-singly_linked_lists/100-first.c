#include <stdio.h>

void __attribute__((constructor)) tortoise(void);

/**
 * tortoise - prints a string before main function is executed
 *
 * Return: Returns nothing
 */
void tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
