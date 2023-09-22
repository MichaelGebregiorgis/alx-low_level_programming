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
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (c[inc] != '\0')
	{
		while (a[inc2] != '\0')
		{
			if (c[inc] == a[inc2])
			{
				c[inc] = n[inc2];
				break;
			}
			inc2++;
		}
		inc++;
	}
	return (c);
}
