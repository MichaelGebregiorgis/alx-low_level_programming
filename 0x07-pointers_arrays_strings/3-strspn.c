#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: Data type
 *
 * @accept: Data type
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int val;
	int inc;

	val = 0;
	inc = 0;

	while (*s)
	{
		while (accept[inc])
		{
			if (*s == accept[inc])
			{
				val += 1;
				break;
			}
			else if (accept[inc + 1] == '\0')
			{
				return (val);
			}
			inc += 1;
		}
		s += 1;
	}
	return (val)
}
