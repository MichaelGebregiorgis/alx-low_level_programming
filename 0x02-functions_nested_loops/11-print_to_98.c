#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 *@n: data type
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
