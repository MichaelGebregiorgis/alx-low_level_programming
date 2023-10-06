#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: Data type
 *
 * @max: Data type
 *
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *val;
	int inc = 0;

	if (min > max)
	{
		return (NULL);
	}
	val = malloc(sizeof(*val) * ((max - min) + 1));
	if (val == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		val[inc] = min;
		inc++;
	}
	return (val);
}
