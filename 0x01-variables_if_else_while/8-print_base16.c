#include <stdio.h>

/**
 * main - print all single digit of base 10 starting
 *        from 0
 *
 * Return: Always 0.
 */
int main(void)
{
int num = 0;
char a_f = 'a';
while (num < 10)
{
putchar((num % 10) + '0');
num++;
}
while (a_f <= 'f')
{
putchar(a_f);
a_f++;
}
putchar('\n');
return (0);
}
