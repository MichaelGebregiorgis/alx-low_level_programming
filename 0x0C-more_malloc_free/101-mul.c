#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int digit(char *n);
int lenVal(char *n);
void err(void);

/**
 * digit - digit checker
 *
 * @n: Data type
 *
 * Return: 0
 */
int digit(char *n)
{
	int inc = 0;

	for (;n[inc]; inc++)
	{
		if (n[inc] < '0' || n[inc] > '9')
		{
			return (0);
		}
	}
	return (1);
}
/**
 * lenVal - str length
 *
 * @n: Data type
 *
 * Return: 0
 */
int lenVal(char *n)
{
	int inc1;

	while (n[inc1] != '\0')
	{
		inc1++;
	}
	return (inc1);
}
/**
 * err - errors
 *
 * Return: 0
 */
void err(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiply two +ve numbers
 *
 * @argc: Data type
 *
 * @argv: Data type
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *c1;
	char *c2;
	int val1, val2, sum, inc, carry, d1, d2, *output, b = 0;

	c1 = argv[1];
	c2 = argv[2];
	if (argc != 3 || !digit(c1) || !digit(c2))
	{
		err();
	}
	val1 = lenVal(c1);
	val2 = lenVal(c2);
	sum = val1 + val2 + 1;
	output = malloc(sizeof(int) * sum);
	if (!output)
		return (1);
	while (inc <= sum - 1)
	{
		output[inc] = 0;
		inc++;
	}
	for (val1 = val1 - 1; val1 >= 0; val1--)
	{
		d1 = c1[val1] - '0';
		carry = 0;
		for (val2 = lenVal(c2) - 1; val2 >= 0; val2--)
		{
			d2 = c2[val2] - '0';
			carry += output[val1 + val2 + 1] + (d1 * d2);
			output[sum] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			output[sum] += carry;
	}
	while (inc < sum - 1)
	{
		if (output[inc])
			b = 1;
		if (b)
			_putchar(output[inc] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(output);
	return (0);
}
