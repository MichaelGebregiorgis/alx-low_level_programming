#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name = prints a name
 *
 * @name: Data type
 *
 * @f: Data type
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
