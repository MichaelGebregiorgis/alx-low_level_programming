#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: Data type
 *
 * @index: Data type
 *
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > 64)
	{
		return (-1);
	}
	a = 1 << index;
	*n = *n | a;
	return (1);
}
