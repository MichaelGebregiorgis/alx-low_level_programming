#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: Data type
 *
 * @n: Data type
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int inc = 0;

	va_start(lst, n);

	while (inc < n)
	{
		printf("%d", va_arg(lst, int));
		if (inc != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		inc++;
	}
	printf("\n");
	va_end(lst);
}
