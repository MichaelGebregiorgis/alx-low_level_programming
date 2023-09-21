#include "main.h"

/**
 * rot13 -  Encodes a string using rot13
 *
 * @c: Data type
 *
 * Return: 0
 */

char *rot13(char *c)
{
	int inc = 0;

	for (; c[inc] != '\0'; inc++)
	{
		while ((c[inc] >= 'a' && c[inc] <= 'z') ||
				(c[inc] >= 'A' && c[inc] <= 'Z'))
		{
			if ((c[inc] >= 'a' && c[inc] <= 'm') ||
					(c[inc] >= 'A' && c[inc] <= 'M'))
			{
				c[inc] += 13;
			}
			else
			{
				c[inc] -= 13;
			}
			inc++;
		}
	}
	return (c);
}
