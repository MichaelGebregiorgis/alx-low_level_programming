#include <stdio.h>

/**
 * main - the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int num1;
	int num2;
	int sum;
	int i;

	num1 = 1;
	num2 = 2;
	i = 0;
	sum = 0;

	while (i < 50)
	{
		printf("%d", sum);
		sum = num1 + num2;
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
