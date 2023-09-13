#include "main.h"
#include <unistd.h>
/**
 * main - Focal entry
 *
 * Description - Program that prints out the string _putchar
 *
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
