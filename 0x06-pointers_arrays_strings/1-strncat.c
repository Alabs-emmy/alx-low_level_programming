#include "main.h"

/**
 * _strncat - concatenates two strings but use number of bytes inputted
 * @dest: string to be appended on
 * @src: string to be completed at the end of dest
 * @n: integer to be compared
 *
 * Return: new concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
		count++;
	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
