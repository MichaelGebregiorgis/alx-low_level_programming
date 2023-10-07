#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * chk - check - string to int
 *
 * @c: Data type
 *
 * Return: 0
 */
int chk(char *c)
{
	unsigned int inc = 0;

	for (; inc < strlen(c); inc++)

	{
		if (!isdigit(c[inc]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Data type
 *
 * @argv: Data type
 *
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int inc, sti, val = 0;

	for (inc = 1; inc < argc; inc++)
	{
		if (chk(argv[inc]))

		{
			sti = atoi(argv[inc]);
			val += sti;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", val);

	return (0);
}
