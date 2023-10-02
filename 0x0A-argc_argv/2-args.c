#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: Data type
 *
 * @argv: Data type
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int inc = 0;

	while (inc < argc)
	{
		printf("%s\n", argv[inc]);
		inc++;
	}

	return (0);
}
