#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: Data type
 *
 * @c: Data type
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *ms;
	unsigned int inc;

	if (size == 0)
	{
		return (NULL);
	}
	
	ms = (char *) malloc(sizeof(c) * size);

	if (ms == NULL)
	{
		return (0);
	}

	for (inc = 0; inc < size; inc++)
	{
		*(ms + inc) = c;
	}
	*(ms + inc) = '\0';

	return (ms);
}
