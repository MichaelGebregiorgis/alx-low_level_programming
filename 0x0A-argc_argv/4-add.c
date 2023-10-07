#include "main.h"
#include <stdio.h>

/**
 * sti - str to int
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
			++d;
		}
		if (c[inc] >= '0' && c[inc] <= '9')
		{
			dig = c[inc] - '0';
			if (d % 2)
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
 * main - adder
 *
 * @argc: Data type
 *
 * @argv: Data type
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int output = 0, n, inc1 = 1, inc2 = 0, m = 1;

	while (inc1 < argc)
	{
		for (; argv[inc1][inc2] != '\0'; inc2++)
		{
			if (argv[inc1][inc2] > '9' || argv[inc1][inc2] < '0')
			{
				puts("Error");
				return (1);
			}
		}
		inc1++;
	}
	while (m < argc)
	{
		n = sti(argv[m]);
		if (n >= 0)
		{
			output += n;
		}
		m++;
	}
	printf("%d\n", output);
	return (0);
}

