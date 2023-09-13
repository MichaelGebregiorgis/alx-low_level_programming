#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98
 *@n: data type
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				_putchar('\n');
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
