#include "main.h"

/**
 * print_alphabet - print alphabet using _putchar
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		_putchar(az);
	}
	_putchar('\n');
}
