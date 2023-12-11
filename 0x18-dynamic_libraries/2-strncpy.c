#include "main.h"

/**
 * _strncpy - copy a string
 *
 * @dest: Data type
 * @src: Data type
 * @n: Data type
 *
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int str = 0;

	while (str < n && src[str] != '\0')
	{
		dest[str] = src[str];
		str += 1;
	}
	for (; str < n;)
	{
		dest[str] = '\0';
		str += 1;
	}
	return (dest);
}
