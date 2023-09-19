#include "main.h"

/**
 * puts_half - Print second half of the string
 *
 * @str: Data type
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i;
	int inc;

	for (; str[inc] != '\0';)
	{
		inc++;
	}
	if ((inc % 2) == 0)
	{
		i = inc;
		while (str[inc] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else if (inc % 2)
	{
		for (i = (inc - 1) / 2; i < inc - 1; i++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
