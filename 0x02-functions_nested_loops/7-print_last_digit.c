#include "main.h"

/**
 * print_last_digit - prints last digit of the number
 *
 * @n: data type
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	_putchar(lastDigit);
	return (lastDigit);
}
