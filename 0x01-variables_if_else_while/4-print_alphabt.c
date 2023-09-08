#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints out all alphabets except e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		if (az != 'e' && az != 'q')
		{
			putchar(az);
		}
		az++;
	}
	putchar('\n');
	return (0);
}
