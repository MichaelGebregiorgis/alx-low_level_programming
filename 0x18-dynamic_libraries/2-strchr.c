#include "main.h"

/**
 * _strchr -  locates a character in a string
 *
 * @s: Data type
 *
 * @c: Data type
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	if (*s == c)
	{
		return (s);
	}
	return (0);
}
