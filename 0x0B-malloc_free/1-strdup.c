#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 *
 * @str: Data type
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	char *allocate;
	unsigned int inc = 0, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[inc] != '\0')
	{
		inc++;
	}

	allocate = malloc(sizeof(char) * (inc + 1));

	if (allocate == NULL)
	{
		return (NULL);
	}

	while (len <= inc)
	{
		allocate[len] = str[len];
		len++;
	}
	return (allocate);
}
