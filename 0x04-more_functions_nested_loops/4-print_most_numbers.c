#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numers 0 to 9 excluding 2 and 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (!(num == 2 || num == 4))
		{
			_putchar(num + '0');
		}
	}
	_putchar('\n');
}
