#include "main.h"

/**
 * cap_string - capitilize all strings
 *
 * @c: Data type
 *
 * Return: 0
 */

char *cap_string(char *c)
{
	int inc = 0;

	while (c[inc] != '\0')
	{
		if ((c[inc - 1] == ' ' ||
		c[inc - 1] == '\n' ||
		c[inc - 1] == '\t' ||
		c[inc - 1] == ';' ||
		c[inc - 1] == ',' ||
		c[inc - 1] == '?' ||
		c[inc - 1] == '!' ||
		c[inc - 1] == '"' ||
		c[inc - 1] == ')' ||
		c[inc - 1] == '.' ||
		c[inc - 1] == '(' ||
		c[inc - 1] == '{' ||
		c[inc - 1] == '}') && (c[inc] >= 'a' && c[inc] <= 'z'))
		{
			c[inc] = c[inc] = 32;
		}
		else if (c[0] >= 97 && c[0] <= 122)
		{
			c[0] = c[0] - 32;
		}
		else
		{
			c[inc] = c[inc];
		}
		i++;
	}
	return (c);
}
