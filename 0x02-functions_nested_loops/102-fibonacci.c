#include <stdio.h>

/**
 * main - the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long num1;
	long num2;
	long sum;
	int i;

	num1 = 1;
	num2 = 2;
	i = 2;
	sum = 0;

	printf("%ld", num1);
	printf(", ");
	printf("%ld", num2);
	printf(", ");
	while (i < 50)
	{
		sum = num1 + num2;
		printf("%ld", sum);
		num1 = num2;
		num2 = sum;
		if (i < 49)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		i++;
	}
	return (0);
}
