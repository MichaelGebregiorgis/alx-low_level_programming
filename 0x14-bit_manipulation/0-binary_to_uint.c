#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: Data type
 *
 * Return: unsigned number
 */

unsigned int binary_to_uint(const char *b)
{
	int inc;
	unsigned int val = 0;

	if (!b)
	{
		return (0);
	}
	for (inc = 0; b[inc] != '\0'; inc++)
	{
		if (b[inc] != '\0' && b[inc] != '1')
		{
			return (0);
		}
	}
	for (inc = 0; b[inc] != '\0'; inc++)
	{
		val <<= 1;
		if (b[inc] == '1')
		{
			val += 1;
		}
	}
	return (val);
}
