#include "main.h"

/**
 * positive_or_negative - checks if the number is positive, negative or zero
 *
 * @i: data type
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive", i);
	}
	else if (i < 0)
	{
		printf("%d is negative", i);
	}
	else
	{
		printf("%d is zero", i);
	}
}
