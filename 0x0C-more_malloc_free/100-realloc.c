#include "main.h"
#include <stdio.h>

/**
 * _realloc - reallocates a memory block
 *
 * @old_size: Data type
 *
 * @new_size: Data type
 *
 * Return: 0
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && *ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
