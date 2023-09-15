#include "main.h"

/**
 * more_numbers - print 1 to 14 ten times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i, j;

	i = 1;
	j = 0;

	while (i <= 10)
	{
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar('1');
			}
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
		j = 0;
	}
}
