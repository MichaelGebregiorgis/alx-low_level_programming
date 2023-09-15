#include "main.h"

/**
 * print_diagonal - print diagonals n times
 *
 * @n: Data type
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int spaces;
	int lines;

	if (n > 0)
	{
		for (lines = 0; lines < n; lines++)
		{
			for (spaces = 0; spaces < lines; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
