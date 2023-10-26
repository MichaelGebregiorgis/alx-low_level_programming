#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: Data type
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int shft;

	if (n == 0)
	{
		printf("0");
		return;
	}
	tmp = n;
	shft = 0;
	while ((tmp >>= 1) > 0)
	{
		shft++;
	}
	while (shft >= 0)
	{
		if ((n >> shft) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		shft--;
	}
}
