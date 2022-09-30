#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: the source string to be appended to @dest
 * @dest: a pointer to the string to be concatenated upon
 * Return: a pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
