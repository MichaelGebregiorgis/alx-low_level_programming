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

	while (str[i] != '\0')
	{
		puts(str[i]);
		i++;
	}
	puts('\n');
}
