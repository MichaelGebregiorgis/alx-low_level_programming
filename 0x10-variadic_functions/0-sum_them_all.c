#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: Data type
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int inc = 0;
	va_list lst;

	va_start(lst, n);

	while (inc < n)
	{
		sum += va_arg(lst, int);
		inc++;
	}
	va_end(lst);

	return (sum);
}
