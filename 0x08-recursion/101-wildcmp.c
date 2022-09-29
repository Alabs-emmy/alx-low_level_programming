#include "main.h"

/**
 * wildcmp - compare two strings with "wildcard expansion" capabilities
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if strings can be considered identical, else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
	{
		if (*s1 == '\0' && *s2 == '*')
			return (wildcmp(s1, ++s2));
		else if (*s1 == '*' && *s2 == '\0')
			return (wildcmp(++s1, s2));
		return (0);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(++s1, ++s2));
	}
	else if (*s1 == '*')
	{
		if (*(s1 + 1) == '*')
			return (wildcmp(++s1, s2));
		else
		{
			return (wildcmp(s1, find_str(s2, *(s1 + 1), 0, 0) + s2));
		}
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, ++s2));
		else
		{
			return (wildcmp(s1 + find_str(s1, *(s2 + 1), 0, 0), s2));
		}
	}

	return (0);

}

int find_str(char *s, char w, int x, int z)
{
	if (*(s + x) == '\0')
		return (z + 1);
	else if (*(s + x) == w || *(s + x) == '*')
		z = x;

	return (find_str(s, w, x + 1, z));
}
