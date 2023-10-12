#include "3-calc.h"

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
	char *res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi([3]);
	res = argv[2];

	if (get_op_func(res) == NULL ||res[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	else if ((*op == '/' && n2 == 0) || (*op == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(res)(n1, n2));
	return (0);
}
