#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 *@n: data type
 * Return: 0
 */

void print_to_98(int n)
{
	if (n > 97)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		n--;
	}
	else if (n < 99)
	{
		n++;
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}
	else
	{
		n = n;
	}
}
