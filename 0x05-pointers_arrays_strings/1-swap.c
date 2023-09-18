#include "main.h"

/**
 * swap_int - swap values of two integer
 *
 * @a: Data type
 * @b: Data type
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int init;

	init = *a;
	*a = *b;
	*b = init;
}
