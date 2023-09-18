#include "main.h"

/**
 * print_rev - Print in reverse
 *
 * @s: Dat type
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int inc = 0;
	int rev;

	while (s[inc] != '\0')
	{
		inc = inc + 1;
	}
	for (rev = inc - 1; rev >= 0; i--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
