#include "main.h"

/**
 * _strncat - concatenate strings
 *
 * @dest: Data type
 * @src: Data type
 * @n: data type
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int str1 = 0;
	int str2 = 0;

	for (; dest[str1] != '\0';)
	{
		str1 += 1;
	}
	while (src[str2] != '\0' && str2 < n)
	{
		dest[str1] = src[str2];
		str1 += 1;
		str2 += 1;
	}
	dest[str1] = '\0';
	return (dest);
}
