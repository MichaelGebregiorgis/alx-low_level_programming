#include "main.h"
#include <stdio.h>
/**
 * _realloc - reallocates a memory block
 *
 * @old_size: Data type
 *
 * @new_size: Data type
 *
 * @ptr: Data type
 *
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *val;
	char *oldval;
	unsigned int inc = 0;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	val = malloc(new_size);
	if(val == NULL)
	{
		return (NULL);
	}
	if (old_size < new_size)
	{
		oldval = old_size;
	}
	else
	{
		oldval = new_size;
	}
	while (inc < oldval)
	{
		*((char *)val + 1) = *((char *)ptr + inc);
		inc++;
	}
	free(ptr);
	return (val);
}
