#include "main.h"

int strLen(char *s);
int pointer(char *s, int i);

/**
 * strLen - length
 *
 * @s: Data type
 *
 * Return: 0
 */

int strLen(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + strLen(++s));
}

/**
 * pointer - pointer to a string
 *
 * @s: Data type
 *
 * @i: Data type
 *
 * Return: 0
 */

int pointer(char *s, int i)
{
	if (i < 1)
	{
		return (0);
	}
	if (*s == *(s + 1))
	{
		return (pointer(s + 1, i - 2));
	}
	return (1);
}

/**
 * is_palindrome - checks for words that are read the same way backwards
 *
 * @s: Data type
 *
 * Return: 0
 */

int is_palindrome(char *s)
{
	int length = strLen(s);

	return (pointer(s, length - 1));
}
