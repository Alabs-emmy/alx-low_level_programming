#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: a pointer to the first string to be compared
 * @s2: a pointer to the second string to be compared
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, ow = 0;

	while (ow == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		ow = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (ow);
}
