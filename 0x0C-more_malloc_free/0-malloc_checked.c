#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory
 *
 * @b: Data type
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	char *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
