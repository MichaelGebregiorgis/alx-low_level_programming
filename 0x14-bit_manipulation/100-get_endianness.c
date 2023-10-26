#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0
 */

int get_endianness(void)
{
	int val = 1;
	char *b;

	val = 1;
	b = (char *)&a;
	return (*b);
}
