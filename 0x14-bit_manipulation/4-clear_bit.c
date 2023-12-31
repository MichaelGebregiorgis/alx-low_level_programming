#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: Data type
 *
 * @index: Data type
 *
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
