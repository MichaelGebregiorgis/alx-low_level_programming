#include "main.h"

/**
 * leet -  encodes a string into 1337
 *
 * @c: Data type
 *
 * Return: 0
 */

char *leet(char *c)
{
	int inc;
	int j;

	char *c1[] = "aAeEoOtTlL";
	char *c2[] = "4433007711";

	for (inc = 0; c[inc] != '\0'; inc++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[inc] == c1[j])
			{
				c[inc] = c2[j];
			}
		}
	}
	return (c);
}
