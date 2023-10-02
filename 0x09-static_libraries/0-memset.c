#include "main.h"

/**
 * _memset - fills memory with a const byte
 *
 * @s: Data type
 *
 * @b: Data type
 *
 * @n: Data type
 *
 * Return: Array with new val
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int inc;

	for (inc = 0; inc < n; inc++)
	{
		s[inc] = b;
	}

	return (s);
}
