#include "main.h"

/**
 * print_number - prints an integer;
 *
 * @n: Data type
 *
 * Return: 0
 */
void print_number(int n)
{
	int num;

	if (n > 0)
	{
		n1 = n;
	}
	else
	{
		num = -n;
		_putchar('-');
	}

	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
