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
	int inc = 0;
	int j;

	for (; str[inc] != '\0';)
	{
		inc++;
	}
	if ((inc % 2) == 0)
	{
		j = inc;
		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
	}
	else if (inc % 2)
	{
		for (i = (inc - 1) / 2; i < inc - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
