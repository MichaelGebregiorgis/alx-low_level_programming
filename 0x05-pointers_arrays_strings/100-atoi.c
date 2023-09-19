#include "main.h"

/**
 * _atoi - Convert string into integer
 *
 * @s: Data type
 *
 * Return: 0
 */

int _atoi(char *s)
{
	int a = 0;
	int integer = 0;
	int mul = 0;
	int j = 0;
	int i = 0;
	int inc = 0;

	for (;s[inc] != '\0';)
	{
		inc++;
	}
	for (i = 0; i < inc; i++)
	{
		while (a == 0)
		{
			if (s[i] == '-')
			{
				++j;
			}
			else if (s[i] >= '0' && s[i] <= '9')
			{
				integer = s[i] - '0';
				if (j % 2)
				{
					integer = integer * -1;
				}
				mul = mul * 10 + integer;
				a = 1;
				if (s[i + 1] < '0' || s[i + 1] > '9')
				{
					break;
				}
				a = 0;
			}
		}
	}
	if (a == 0)
	{
		return (0);
	}
	return (mul);
}
