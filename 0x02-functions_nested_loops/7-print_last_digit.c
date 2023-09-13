#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints last digit of the number
 *
 * @n: data type
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	l = abs(l);
	_putchar(l + '0');
	return (l);
}
