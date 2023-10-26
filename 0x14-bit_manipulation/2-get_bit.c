#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: Data type
 *
 * @index: Data type
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int store;

	if (index > 64)
	{
		return (-1);
	}

	store = n >> index;
	return (store & 1);
}
