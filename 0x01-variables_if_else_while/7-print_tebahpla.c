#include <stdio.h>

/**
 * main - print all lowercase alphabet in reverse mode.
 *
 * Return: Always 0.
 */
int main(void)
{
char a_z = 'z';
while (a_z >= 'a')
{
putchar(a_z);
a_z--;
}
putchar('\n');
return (0);
}
