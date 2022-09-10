#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints the first and last digits of a number
 *        and checks if is greater than 5, less thn 6, or 0
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
if (last_digit < 6 && last_digit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
else
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
return (0);
}
