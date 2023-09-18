#include "main.h"
#include <string.h>

/**
 * _puts - Print string using putchar
 *
 * @str: Data type
 *
 * Return: 0
 */

void _puts(char *str)
{
	long unsigned int i;

	for (i = 0; i <= strlen(*str); i++)
	{
		_putchar(*str[i]);
	}
	_putchar('\n');
}
