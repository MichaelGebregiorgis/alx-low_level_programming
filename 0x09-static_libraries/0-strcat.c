#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: Data type
 *
 * @src: Data type
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int str1 = 0;
	int str2 = 0;

	for (; dest[str1] != '\0';)
	{
		str1 += 1;
	}
	for (; src[str2] != '\0';)
	{
		dest[str1] = src[str2];
		str1 = str1 + 1;
		str2 = str2 + 1;
	}
	dest[str1] = '\0';
	return (dest);
}
