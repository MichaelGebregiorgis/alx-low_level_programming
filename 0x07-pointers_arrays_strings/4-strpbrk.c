#include "main.h"

/**
 * _strpbrk - searches a string
 *
 * @s: Data type
 *
 * @accept: Data type
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int inc = 0;

	while (*s)
	{
		for (; accept[inc]; inc++)
		{
			if (*s == accept[inc])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
