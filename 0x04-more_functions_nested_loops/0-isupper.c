#include "main.h"

/**
 * _isupper - Checks if the input is uppercase or not
 *
 * @c: Data type
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (isupper(c) == 1)
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_putchar(isupper(c));
	}
	else if (isupper(c) == 0)
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_putchar(isupper(c));
	}
}
