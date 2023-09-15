#include "main.h"

/**
 * more_numbers - print 1 to 14 ten times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i, j;

	while (i <= 10)
	{
		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
	}
}
