#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints all possible combinations
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 9 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
