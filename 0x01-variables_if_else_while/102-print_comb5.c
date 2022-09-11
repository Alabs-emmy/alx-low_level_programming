#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits 
 *        ranging from 0-99 separated by a comma followed by space
 *
 * Return: Always 0.
 */
int main(void)
{
int num1, num2;
num1 = 0;
while (num1 < 99)
{
num2 = num1 + 1;
while (num2 < 100)
{
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');
if (num1 != 98 || num2 != 99)
{
putchar(',');
putchar(' ');
}
num2++;
}
num1++;
}
putchar('\n');
return (0);
}
