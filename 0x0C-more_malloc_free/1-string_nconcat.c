#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: Data type
 *
 * @s2: Data type
 *
 * @n: Data type
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *val;
	unsigned int inc = 0, j = 0, len = 0, len1 = 0;

	while (s1 && s1[len])
	{
		len++;
	}
	while (s2 && s2[len1])
	{
		len1++;
	}

	if (n < len1)
	{
		val = malloc(sizeof(char) * (len + n + 1));
	}
	else
	{
		val = malloc(sizeof(char) * (len + len1 + 1));
	}
	if (!val)
	{
		return (NULL);
	}
	for (; inc < len; inc++)
	{
		val[inc] = s1[inc];
	}
	while (n < len1 && inc < (len + n))
	{
		val[inc++] = s2[j++];
	}
	while (n > len1 && inc < (len + len1))
	{
		val[inc++] = s2[j++];
	}
	val[inc] = '\0';
	return (val);
}
