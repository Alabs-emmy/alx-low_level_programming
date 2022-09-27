#include "main.h"

/**
 * *_strchr - locates a character in a string.
 *
 * @s: string.
 * @c: character to be located.
 * Return: pointer to first occurrence of NULL if no character found.
 */
char *_strchr(char *s, char c)
{
	int i = 0
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return ((s + i));
		}
		i+;
	}
	return (0);
}
