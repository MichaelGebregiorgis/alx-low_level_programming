#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: Data type
 *
 * @s2: Data type
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *allocate;
	unsigned int i = 0, len = 0, len1 = 0, lim = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[len] != '\0')
	{
		len++;
	}

	allocate = malloc(sizeof(char) * (i + len + 1));

	if (allocate == NULL)
	{
		free(allocate);
		return (NULL);
	}
	while (len1 < i)
	{
		allocate[len1] = s1[len1];
		len1++;
	}
	lim = len;
	while (len <= lim)
	{
		allocate[len1] = s2[len];
		len1++;
		len++;
	}
	return (allocate);
}
