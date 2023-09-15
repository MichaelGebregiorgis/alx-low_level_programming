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

	tri = 1;
	if (size > 0)
	{
		for (lines = 1; lines <= size; lines++)
		{
			for (gap = size - lines; gap >= 1; gap--)
			{
				_putchar(' ');
			}
			while (tri <= lines)
			{
				_putchar('#');
				tri++;
			}
			tri = 1;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
