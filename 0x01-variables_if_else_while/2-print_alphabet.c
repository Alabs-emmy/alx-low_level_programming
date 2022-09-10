#include <stdio.h>

/**
 * main - Prints the letter in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
char a_z;
a_z = 'a';
while (a_z <= 'z')
{
putchar(a_z);
a_z++;
}
putchar('\n');
return (0);
}
