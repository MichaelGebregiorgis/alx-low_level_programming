#include "main.h"

int recureVal(int n, int num);
/**
 * is_prime_number - chack if the number is prime
 *
 * @n: Data type
 *
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (recureVal(n, n - 1));
}

/**
 * recureVal - prime checker
 *
 * @n: Data type
 *
 * @num: Data type
 *
 * Return: 0
 */

int recureVal(int n, int num)
{
	if (num == 1)
	{
		_putchar('1');
		return;
	}
	else if (n % num == 0 && num > 0)
	{
		_putchar('0');
		return;
	}
	return (recureVal(n, num - 1));
}
