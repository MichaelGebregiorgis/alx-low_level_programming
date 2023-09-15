#include "main.h"

/**
 * print_line - print _ n times
 *
 * @n: Data type
 *
 * Return: 0
 */

void print_line(int n)
{
	int iTimes;

	if (n > 0)
	{
		for (iTimes = 1; iTimes <= n; iTimes++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

