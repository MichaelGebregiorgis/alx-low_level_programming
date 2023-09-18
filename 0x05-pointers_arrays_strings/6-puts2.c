#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: Data type
 *
 * Return: 0
 */

void puts2(char *str)
{
	int inc = 0;
	int i;

	for (; str[inc];)
	{
		inc++;
	}
	for (i = 0; i < inc; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
