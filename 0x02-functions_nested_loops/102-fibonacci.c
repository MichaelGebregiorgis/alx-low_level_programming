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
	i = 0;
	sum = 0;

	printf("%d", num1);
	printf("%d", num2);
	while (i < 50)
	{
		sum = num1 + num2;
		printf("%d", sum);
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
