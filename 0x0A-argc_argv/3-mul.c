#include "main.h"
#include <stdio.h>

/**
 * sti - String to int
 *
 * @c: Data type
 *
 * Return: 0
 */
int sti(char *c)
{
	int inc = 0, d = 0, val = 0, len = 0, e = 0, dig = 0;

	for (; c[len] != '\0';)
	{
		len += 1;
	}

	while (inc < len && e == 0)
	{
		if (c[inc] == '-')
		{
			++e;
		}
		if (c[inc] >= '0' && c[inc] <= '9')
		{
			dig = c[inc] - '0';
			if (e % 2)
			{
				dig = -dig;
			}
			val *= 10 + dig;
			e = 1;
			if (c[inc + 1] < '0' || c[inc + 1] > '9')
			{
				break;
			}
			e = 0;
		}
		inc += 1;
	}
	if (e == 0)
	{
		return (0);
	}
	return (val);
}
/**
 * main - multiples of two numbers
 *
 * @argc: Data type
 *
 * @argv: Data type
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int output, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = sti(argv[1]);
	n2 = sti(argv[2]);
	output = n1 * n2;
	printf("%d\n", output);
	return (0);
}
