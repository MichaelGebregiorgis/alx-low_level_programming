#include "main.h"

/**
 * _sqrt_recursion - square root of a value
 *
 * @n: Data type
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_val(n, 1));
}

/**
 * sqrt_val - find the number
 *
 * @n: Data type
 *
 * @mul: Data type
 *
 * Return: 0
 */

int sqrt_val(int n, int mul)
{
	if (mul * mul > n)
	{
		return (-1);
	}
	else if (mul * mul == n)
	{
		return (mul);
	}
	return (sqrt_val(n, mul + 1));
}
