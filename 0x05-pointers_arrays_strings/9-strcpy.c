#include "main.h"

/**
 * _strcpy - Copies pointed string
 *
 * @src: Data type
 *
 * @dest: Data type
 *
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;
	int i = 0;

	while (src[inc] != '\0')
	{
		inc++;
	}
	while (i < inc)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
