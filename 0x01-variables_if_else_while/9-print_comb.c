#include <stdio.h>

/**
 * main - print all single digits in base 10
 *        with a comma and tab between them
 *
 * Return: Always 0.
 */
int main(void)
{
int num = 0;
while (num < 10)
{
putchar((num % 10) + '0');
putchar(',');
putchar('\t');
num++;
}
putchar('\n');
return (0);
}
