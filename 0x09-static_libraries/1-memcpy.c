#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: Data type
 *
 * @n: Data type
 *
 * @src: Data type
 *
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int inc;

	for (inc = 0; inc < n; inc++)
	{
		dest[inc] = src[inc];
	}

	return (dest);
}
