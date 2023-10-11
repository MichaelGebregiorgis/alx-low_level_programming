#include "function_pointers.h"

/**
 * int_index - search for int
 *
 * @array: Data type
 *
 * @size: Data type
 *
 * @cmp: Data type
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int inc = 0;

	if (array && cmp)
	{
		while (inc < size)
		{
			if (cmp(array[inc]) != 0)
			{
				return (inc);
			}
			inc++;
		}
	}
	return (-1);
}
