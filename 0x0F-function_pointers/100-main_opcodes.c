#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode
 *
 * @argc: Data type
 *
 * @argv: Data type
 *
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int byte, inc = 0;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;

	while (inc < byte)
	{
		if (inc == byte - 1)
		{
			printf("%02hhx\n" array[inc]);
			break;
		}
		printf("%02hhx", array[inc]);
		inc++;
	}
	return (0);
}
