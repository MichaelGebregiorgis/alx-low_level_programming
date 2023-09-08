#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints out all the hexadecimal values
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char af;
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (af = 'a'; af <= 'f'; af++)
	{
		putchar(af);
	}
	putchar('\n');
	return (0);
}
