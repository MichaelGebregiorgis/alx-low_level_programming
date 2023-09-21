#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @c: Data type
 *
 * Return: 0
 */

char *string_toupper(char *c)
{
	int inc = 0;

	for (; c[inc] != '\0'; inc++)
	{
		if (c[inc] >= 'a' && c[inc] <= 'z')
		{
			c[inc] = c[inc] - 32;
		}
	}
	return (c);
}
