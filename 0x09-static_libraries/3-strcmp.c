#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: Data type
 * @s2: Data type
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int val;

	val = 0;

	for (; *s1 == *s2 && *s1 != '\0';)
	{
		s1 += 1;
		s2 += 1;
	}
	if (s1 != s2)
	{
		val = *s1 - *s2;
	}
	return (val);
}
