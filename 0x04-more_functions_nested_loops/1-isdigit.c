#include "main.h"
#include <ctype.h>

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
	if (result)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
