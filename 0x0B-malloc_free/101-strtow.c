#include "main.h"
#include <stdlib.h>

/**
 * wordC - counter
 *
 * @c: Data type
 *
 * Return: 0
 */

int wordC(char *c)
{
	int a = 0, inc = 0, out = 0;

	while (c[inc] != '\0')
	{
		if (c[inc] == ' ')
		{
			a = 0;
		}
		else if (a == 0)
		{
			a = 1;
			out++;
		}
		inc++;
	}
	return (out);
}

/**
 * strtow - splits a string into words
 *
 * @str: Data type
 *
 * Return: 0
 */

char **strtow(char *str)
{
	char **val, *temp;
	int inc = 0, i = 0, len = 0, chars, a = 0, strt, end;

	for (; *(str + len);)
		len++;
	chars = wordC(str);
	if (chars == 0)
		return (NULL);
	val = malloc(sizeof(char *) * (chars + 1));
	if (val == NULL)
		return (NULL);
	while (i <= len)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (a)
			{
				end = i;
				temp = malloc(sizeof(char) * (a + 1));
				if (temp == NULL)
					return (NULL);
				while (strt < end)
				{
					*temp++ = str[strt++];
				}
				*temp = '\0';
				val[inc] = temp - a;
				inc++;
				a = 0;

			}
		}
		else if (a++ == 0)
		{
			strt = i;
		}
		i++;
	}
	val[a] = NULL;
	return (val);
}
