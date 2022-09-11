#include <stdio.h>

/**
 * main - Prints all letter in lowercase
 *        except letter q and e
 *
 * Return: Always 0.
 */
int main(void)
{
char a_z = 'a';
while (a_z <= 'z')
{
if (a_z != 'q' && a_z != 'e')
putchar(a_z);
a_z++;
}
putchar('\n');
return (0);
}
