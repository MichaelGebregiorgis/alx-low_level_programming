#include "main.h"
#include <stdio.h>

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
	int j = 0;

	for (; *s != '\0'; j++)
	{
		for (; accept[inc] != '\0'; inc++)
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
