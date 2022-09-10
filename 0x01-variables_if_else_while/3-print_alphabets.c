#include <stdio.h>

/**
 * main - Prints the letter in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
char a_z, A_Z;
a_z = 'a';
A_Z = 'A';
while (a_z <= 'z')
{
putchar(a_z);
a_z++;
}
while (A_Z <= 'Z')
{
putchar(A_Z);
A_Z++;
}
putchar('\n');
return (0);
}
