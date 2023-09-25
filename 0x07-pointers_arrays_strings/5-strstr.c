#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: Data type
 *
 * @needle: Data type
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *val = haystack;
	char *nd = needle;

	while (*haystack != '\0')
	{
		while (*val == *nd && *nd != '\0')
		{
			val++;
			nd++;
		}
		if (*nd == '\0')
		{
			return (*haystack);
		}
		haystack++;
	}
	return (0);
}
