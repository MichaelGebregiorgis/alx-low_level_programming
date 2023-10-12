#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 *
 * @separator: Data type
 *
 * @n: Data type
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int inc = 0;
	char *str;
	va_list lst;

	va_start(lst, n);

	while (inc < n)
	{
		str = va_arg(lst, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		if (separator == NULL)
		{
			printf("%s", str);
		}
		else if (separator && inc == 0)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
		inc++;
	}
	printf("\n");
	va_end(lst);
}
