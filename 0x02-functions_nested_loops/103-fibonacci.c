#include <stdio.h>

/**
 * main - Fibonacci even number and 4000000
 *
 * Return: 0
 */

int main(void)
{
	long num1 = 0, num2 = 1;
	long sum;
	long result;

	while (1)
	{
		sum = num1 + num2;

		if (sum % 2 == 0)
		{
			result = result + sum;
		}
		else if (sum > 4000000)
		{
			break;
		}

		num1 = num2;
		num2 = sum;
	}
	printf("%ld\n", result);
	return (0);
}
