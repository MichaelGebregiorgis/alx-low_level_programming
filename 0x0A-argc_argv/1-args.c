#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 *
 * @argc: Data type
 *
 * @argv: Data type
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
