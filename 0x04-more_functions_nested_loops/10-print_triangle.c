#include "main.h"

/**
 * print_triangle - print triangle
 *
 * @size: Data type
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int gap;
	int tri;
	int lines;
	int val;

	if (size > 0)
	{
		for (lines = 1; lines <= size)
		{
			val = size - row;
			for (gap = val; gap >= 1; gap--)
			{
				_putchar(' ');
			}
			while (tri <= lines)
			{
				_putchar('#');
				tri++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
