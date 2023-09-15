#include <stdio.h>

/**
 * main - Fizz buzz
 *
 * Return: 0
 */

int main(void)
{
	int num;

	num = 1;
	while (num < 100)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
		num++;
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
