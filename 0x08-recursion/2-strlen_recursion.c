#include "main.h"

/**
 * _strlen_recursion - return string length
 *
 * @s: Data type
 *
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('0');
	}
	_putchar(1 + _strlen_recursion(s+10));
}
