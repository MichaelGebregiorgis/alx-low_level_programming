#include <stdio.h>

/**
 * main - print out all multiples of three or five
 *
 * Return: 0
 */

int main(void)
{
	int sum;
	int i;

	sum = 0;
	i = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
