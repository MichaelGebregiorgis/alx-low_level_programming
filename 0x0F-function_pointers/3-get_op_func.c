#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform the operation
 *
 * @s: Data type
 *
 * Return: pointer
 */

int (*get_op_func(char *s))(int, int)
{
	opt_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int inc = 0;

	while (ops[inc].op)
	{
		if (strcmp(ops[inc].op, s) == 0)
		{
			return (ops[inc].f);
		}
		inc++;
	}
	return (NULL);
}
