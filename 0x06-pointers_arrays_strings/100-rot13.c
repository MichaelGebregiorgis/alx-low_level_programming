#include "main.h"

/**
 * rot13 -  Encodes a string using rot13
 *
 * @c: Data type
 *
 * Return: 0
 */

char *rot13(char *c)
{
	int inc = 0;
	int inc2 = 0;

	char az[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char nm[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (c[inc] != '\0')
	{
		while (az[inc2] != '\0')
		{
			if (c[inc] == az[inc2])
			{
				c[inc] = nm[inc2];
				break;
			}
			inc2 += 1;
		}
		inc += 1;
	}
	return (c);
}
