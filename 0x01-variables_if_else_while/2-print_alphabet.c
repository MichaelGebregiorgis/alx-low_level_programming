#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - The program prints out all the alphabets in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
