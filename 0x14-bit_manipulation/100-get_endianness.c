#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0
 */

int get_endianness(void)
{
	int val;
	char *b;

	val = 1;
	b = (char *)&val;
	return (*b);
}
