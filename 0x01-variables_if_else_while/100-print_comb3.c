#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - prints different possible combinations
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j += i;

	for (i = '0'; i <= '8'; i++)
	{
		for (j; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '8' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
