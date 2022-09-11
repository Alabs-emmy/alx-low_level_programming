#include <stdio.h>

/**
 * main - print single digit number separated
 *        by comman and space
 *
 * Return: Always 0.
 */
int main(void)
{
int num;
num = 0;
while (num < 10)
{
putchar((num % 10) + '0');
if (num != 9)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
