#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int gh1 = 0, ef1 = 1, gh2 = 0, ef2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", ef1, ef2);
	for (count = 2; count < 98; count++)
	{
		if (ef1 + ef2 > LARGEST || gh2 > 0 || gh1 > 0)
		{
			hold1 = (ef1 + ef2) / LARGEST;
			hold2 = (ef1 + ef2) % LARGEST;
			hold3 = gh1 + gh2 + hold1;
			gh1 = gh2, gh2 = hold3;
			ef1 = ef2, ef2 = hold2;
			printf("%lu%010lu", gh2, ef2);
		}
		else
		{
			hold2 = ef1 + ef2;
			bk1 = ef2, ef2 = hold2;
			printf("%lu", ef2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
