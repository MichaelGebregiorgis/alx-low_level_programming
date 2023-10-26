#include "main.h"
#include <stdio.h>

/**
 * flip_bits -  returns the bit number needed to flip
 *
 * @n: Data type
 *
 * @m: Data type
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int val = 0;
	unsigned long int diff;

	diff = n ^ m;
	while (diff)
	{
		val++;
		diff &= (diff - 1);
	}
	return (val);
}
