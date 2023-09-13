#include <unistd.h>
/**
 * _putchar - Program that prints out the string _putchar
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
