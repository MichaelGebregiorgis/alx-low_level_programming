#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print out numbers from 0 to 9 without using char syntax
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = '0'; num < '10'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
