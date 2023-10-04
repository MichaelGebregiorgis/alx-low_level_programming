#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 *
 * @width: Data type
 *
 * @height: Data type
 *
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int row = 0, column = 0;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}
	while (row < height)
	{
		array[row] = (int *) malloc(sizeof(int) * width);
		if (array[row] == NULL)
		{
			free(array);
			while (column <= row)
			{
				free(array[column]);
				column++;
			}
			return (NULL);
		}
		row++;
	}

	while (row < height)
	{
		while (column < width)
		{
			array[row][column] = 0;
			column++;
		}
		row++;
	}
	return (array);
}
