#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name
 *
 * @argc: Data type
 *
 * @argv: Data type
 *
 * Return: 0
 */

int main(it argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
