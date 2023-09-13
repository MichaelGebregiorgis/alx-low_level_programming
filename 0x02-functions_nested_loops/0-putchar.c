#include "main.h"

/**
 * main - prints out the string _putchar
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
