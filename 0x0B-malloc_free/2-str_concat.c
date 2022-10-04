#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - gives the length of a string
 * @str: string to find length
 *
 * Return: Returns the length of str
 */
int _strlen(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
		;
	return (count);
}



/**
 * *str_concat - function concatenates two given string
 * @s1: first string
 * @s2: seconmd string
 *
 * Return: Returns string combination
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	size_sum = size1 + size2;

	/* +1 space for '\0' */
	ptr = malloc((sizeof(char) * sum) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size_sum; i++)
	{
		if (i < size1)
		{
			ptr[i] = s1[i];
		}
		else
		{
			ptr[i] = s2[i - size1];
		}
	}
	m[i] = '\0';
	return (ptr);
}
