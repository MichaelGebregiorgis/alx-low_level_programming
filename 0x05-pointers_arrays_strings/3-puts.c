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
	int inc;

	inc = 0;
	while (str[inc] != '\0')
	{
		return (str[inc]);
		inc++;
	}
	_putchar('\n');
}
