#include <stdio.h>

/**
 * main - Fibonacci even number and 4000000
 *
 * Return: 0
 */

int main(void)
{
	float num1 = 0, num2 = 1;
	float sum;
	int i;

	i = num1 + num2;
	while (sum <= 4000000)
	{
		if (i % 2 == 0)
		{
			sum = sum + i;
		}
		num1 = num2;
		num2 = i;
	}
	printf("%ld", sum);
	return (0);
}
