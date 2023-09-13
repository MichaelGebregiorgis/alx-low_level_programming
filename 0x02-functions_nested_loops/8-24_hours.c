#include "main.h"

/**
 * jack_bauer - print every minute
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 5; h++)
	{
		for (m = 0; m <= 9; m++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
		}
	}
}
