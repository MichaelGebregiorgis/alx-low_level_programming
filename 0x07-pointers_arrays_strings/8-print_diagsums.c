#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints sums
 *
 * @a: Data type
 *
 * @size: Data type
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_1 = 0;
	int sum_2 = 0;

	while (i < size)
	{
		sum_1 += *(a + (size * i + i));
		sum_2 += *(a + (size * i + size - 1 - i));
		i++;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
