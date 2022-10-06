#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *string_nconcat - creates a string that contain s1 and first n byte
 *			n byte of s2
 * @s1: first string
 * @s2: second string
 * @n: first n byte of second string
 *
 * Return: return NLL if fail, else pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size_1, i, new_string_size;
	char *new_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_1 = _strlen(s1);
	/* +1 memory space foe '\0' */
	new_string_size = (size_1 + n + 1);
	new_string = malloc(new_string * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < new_string_size; i++)
	{
		if (i < size_1)
			*(new_string + i) = *(s1 + i);
		else
			*(new_string + i) = *(s2 + (size_1 - i));
	}
	*(new_string + i) = '\0';
	return (new_string);
}


/**
 * _strlen - counts the number of character in a string
 * @str: string to count
 *
 * Return: Returns the number of count
 */
int _strlen(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
		return (count);
}
