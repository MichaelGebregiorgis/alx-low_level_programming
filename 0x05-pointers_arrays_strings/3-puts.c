#include "main.h"

/**
 * _puts - Print string using putchar
 *
 * @str: Data type
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	for (; *str[i] != '\0';)
	{
		_putchar(*str[i]);
	}
	_putchar('\n');
}
