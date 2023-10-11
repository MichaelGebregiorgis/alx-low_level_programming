#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 *
 * @array: Data type
 *
 * @size: Data type
 *
 * @action: Data type
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int inc = 0;

	if (!array || !action)
	{
		return;
	}
	while (inc < size)
	{
		action(array[inc]);
		inc++;
	}
}
