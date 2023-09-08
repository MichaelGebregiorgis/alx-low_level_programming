#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabets backward
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char za = 'z';

	while (za <= 'a')
	{
		putchar(za);
		za--;
	}
	putchar('\n');
	return (0);
}
