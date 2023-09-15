#include "main.h"

/**
 * _isdigit - checks if the value is a digit or not
 *
 * @c: Data type
 *
 * Return: 0
 */

int _isdigit(int c)
{
	int result;

	result = isdigit(c);
	_putchar(c);
	_putchar(':');
	_putchar(' ');
	_putchar(result);
}
