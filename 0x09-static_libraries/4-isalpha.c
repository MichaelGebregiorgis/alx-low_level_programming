#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Checks if the value is an alphabet or not
 *
 * @c: data type
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
