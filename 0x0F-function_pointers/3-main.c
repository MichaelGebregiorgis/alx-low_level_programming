#include "3-calc.h"
#include <stdlib.h>
/**
 * main - perform simple operations
 *
 * @argc: Data type
 *
 * @argv: Data type
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int val;
	char *res;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi([3]);
	res = *argv[2];
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	else if ((res == '/' || res == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	val = func(n1, n2);
	printf("%d\n", val);
	return (0);
}
