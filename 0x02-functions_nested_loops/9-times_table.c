#include "main.h"

/**
 * times_table - 9 times table
 *
 * Retrun: 0
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int mul;

			mul = i * j;
			return (mul);
			_putchar(',');
			_putchar(' ');
		}
	}
}

