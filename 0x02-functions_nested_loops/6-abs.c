#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - Compute absolute values
 *
 * @num: data type
 * Return: 0
 */

int _abs(int num)
{
	int absval;

	absval = abs(num);
	_putchar(absval);
	return (0);
}
