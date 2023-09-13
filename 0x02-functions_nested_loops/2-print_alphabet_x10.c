#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int num;
	char az;

	for (num = 1; num <= 10; num++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
		_putchar('\n');
	}
}
