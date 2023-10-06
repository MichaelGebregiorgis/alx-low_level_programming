#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @size:Data type
 *
 * @nmemb: Data type
 *
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char * val;
	unsigned int inc = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	val = malloc(nmemb * size);

	if (val == NULL)
	{
		return (NULL);
	}
	while (inc < (nmemb * size))
	{
		val[inc] = 0;
		inc++;
	}
	retrun (val);
}
