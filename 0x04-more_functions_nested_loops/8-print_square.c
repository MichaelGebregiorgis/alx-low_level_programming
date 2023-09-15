#include "main.h"

/**
 * print_square - Print # n times n lines
 *
 * @size: Data type
 *
 * Return: 0
 */

void print_square(int size)
{
	int lines;
	int nSize;

	lines = 1;
	nSize = 1;

	if (size > 0)
	{
		while (lines <= size)
		{
			while (nSize <= size)
		{
			_putchar('#');
			nSize++;
		}
		_putchar('\n');
		lines++;
		nSize = 1;
		}
	}
	else
	{
		_putchar('\n');
	}
}
