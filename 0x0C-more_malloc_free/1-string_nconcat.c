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
	unsigned int i, c;
	unsigned int size_1, size_2;
	char *new_string;

	size_1 = _strlen(s1);
	size_2 = _strlen(s2);
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n < size_2)
		new_string = malloc((size_1 + n) * sizeof(char) + 1);

	else
		new_string = malloc((size_1 + size_2) * sizeof(char) + 1);

	if (new_string == NULL)
		return (NULL);

	for (i = 0, c = 0; i < (size_1 + n); i++)
	{
		if (i < size_1)
			*(new_string + i) = *(s1 + i);

		else
			*(new_string + i) = *(s2 + c++);

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

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
