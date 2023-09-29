#include "main.h"

/**
 * _puts_recursion - prints a string then new line
 *
 * @s: Data type
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int inc = 0;

	if (s[inc] == '\0')
	{
		return ('\n');
	}
	return (s[inc + 1]);
}
