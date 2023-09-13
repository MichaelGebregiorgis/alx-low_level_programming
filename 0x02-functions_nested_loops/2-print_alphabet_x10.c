#include "main.h"

/**
 * print_alphabet_x10 - Prints out a to z ten times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char az, ten;

	for (ten = 1; ten <= 10; ten++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
		_putchar('\n');
	}
}
