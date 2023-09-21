#include "main.h"

/**
 * reverse_array - array reversor
 *
 * @a: Data type
 * @n: Data type
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < (n - 1); b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
