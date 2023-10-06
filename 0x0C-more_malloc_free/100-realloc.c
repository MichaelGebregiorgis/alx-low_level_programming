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

	if (new_size == 0)
		free(ptr);
		return (NULL);
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	val = malloc(new_size);
	if (!val)
	{
		return (NULL);
	}
	oldval = ptr;
	if (new_size > old_size)
	{
		new_size = old_size;
	}
	while (i < new_size)
	{
		val[inc] = oldval[inc];
	}
	free(ptr);
	return (val);
}
