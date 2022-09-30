#include "main.h"

/**
 * _strlen -function that counts the length of a str
 * @s: pointer to the string
 * Return: returns sum
 *
 */
int _strlen(char *s)
{
int sum = 0;
while (s[sum] != '\0')
{
sum++;
}
return (sum);
}

