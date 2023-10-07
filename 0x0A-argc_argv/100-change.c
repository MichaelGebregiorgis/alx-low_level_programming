#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - minimum number of coins to make change for an amount of money
 *
 * @argc: Data type
 *
 * @argv: Data type
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, inc, val;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	val = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (inc = 0; inc < 5 && n >= 0; inc++)
	{
		while (n >= coins[inc])
		{
			val++;
			n -= coins[inc];
		}
	}

	printf("%d\n", val);
	return (0);
}

