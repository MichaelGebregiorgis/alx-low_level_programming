#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an integer
 *
 * @n: Data type
 *
 * @a: Data type
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int txt;

	txt = 0;

	while (txt < n)
	{
		if (txt != n - 1)
		{
			printf("%d, ", a[txt]);
		}
		else
		{
			printf("%d", a[txt]);
		}
		printf("\n");
		txt++;
	}
}
