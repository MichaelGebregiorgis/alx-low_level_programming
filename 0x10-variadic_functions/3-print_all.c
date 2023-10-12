#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print anything
 *
 * @format: Data type
 */
void print_all(const char * const format, ...)
{
	int inc = 0;
	char *str, *separate = "";
	va_list lst;

	va_start(lst, format);

	if (format != NULL)
	{
		while (format[inc])
		{
			if (format[inc] == 'c')
			{
				printf("%s%c", separate, va_arg(lst, int));
			}
			else if (format[inc] == 'i')
			{
				printf("%s%d", separate, va_arg(lst, int));
			}
			else if (format[inc] == 'f')
			{
				printf("%s%f", separate, va_arg(lst, double));
			}
			else if (format[inc] == 's')
			{
				str = va_arg(lst, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s%s", separate, str);
			}
			else
			{
				inc++;
				continue;
			}
			separate = ", ";
			inc++;
		}
	}
	printf("\n");
	va_end(lst);
}
