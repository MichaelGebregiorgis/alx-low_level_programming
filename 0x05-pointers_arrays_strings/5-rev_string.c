#include "main.h"

/**
 * rev_string - Reverse string
 *
 * @s: Data type
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	int inc = 0;
	char rev = s[0];

	while (s[inc] != '\0')
	{
		inc++;
	}
	while (i < inc)
	{
		inc--;
		rev = s[i];
		s[i] = s[inc];
		s[inc] = rev;
		i++;
	}
}
