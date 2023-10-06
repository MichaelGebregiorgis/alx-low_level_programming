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

	if (new_size == 0 && ptr)
		free(ptr);
		return (NULL);
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	val = malloc(new_size);
	if (!val)
	{
		return (NULL);
	}
	oldval = ptr;
	if (newsize < old_size)
	{
		while (inc < new_size)
		{
			ptr[inc] = oldval[inc];
			inc++;
		}
	}
	else if (new_size > old_size)
	{
		while (inc < new_size)
		{
			val[inc] = oldval[inc];
			inc++;
		}
	}
	free(ptr);
	return (val);
}
