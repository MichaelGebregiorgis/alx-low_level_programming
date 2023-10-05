#include "main.h"
#include <stdlib.h>
int wordC(char *c);
/**
 * wordC - counter
 *
 * @c: Data type
 *
 * Return: 0
 */

int wordC(char *c)
{
	int a = 0, inc1 = 0, out = 0;

	while (c[inc1] != '\0')
	{
		if (c[inc1] == ' ')
		{
			a = 0;
		}
		else if (a == 0)
		{
			a = 1;
			out++;
		}
		inc1++;
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
	int inc = 0, i = 0, len = 0, chars, j = 0, strt, end;

	for (; *(str + len);)
		len++;
	chars = wordC(str);
	if (chars == 0)
		return (NULL);
	val = (char **) malloc(sizeof(char *) * (chars + 1));
	if (val == NULL)
		return (NULL);
	while (i <= len)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (j + 1));
				if (temp == NULL)
					return (NULL);
				while (strt < end)
				{
					*temp++ = str[strt++];
				}
				*temp = '\0';
				val[inc] = temp - j;
				inc++;
				j = 0;

			}
		}
		else if (j++ == 0)
		{
			strt = i;
		}
		i++;
	}
	val[j] = NULL;
	return (val);
}
