#include "main.h"

/**
 * times_table - 9 times table
 *
 * Retrun: 0
 */

void times_table(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int mul;

			mul = i * j;
			if (mul > 9)
			{
				k = mul % 10;
				l = (mul - k) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(mul + '0');
			}
			_putchar('\n');
		}
	}
}

