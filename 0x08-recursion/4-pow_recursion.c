#include "main.h"

/**
 * _pow_recursion - power function sing two numbers
 *
 * @x: Data type
 *
 * @y: Data type
 *
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
