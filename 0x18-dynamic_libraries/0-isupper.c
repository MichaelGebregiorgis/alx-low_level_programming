#include "main.h"
#include <ctype.h>
/**
 * _isupper - Checks if the input is uppercase or not
 *
 * @c: Data type
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
