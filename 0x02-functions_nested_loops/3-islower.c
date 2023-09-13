#include "main.h"

/**
 * _islower - chaecks if the value is in lowercase
 *
 * Return: 0
 */

int _islower(int c)
{

	if (islower(c))
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
}
