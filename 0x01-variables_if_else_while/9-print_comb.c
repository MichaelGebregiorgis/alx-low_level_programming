#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Print out numbers 0 to 9 separated with comma
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
