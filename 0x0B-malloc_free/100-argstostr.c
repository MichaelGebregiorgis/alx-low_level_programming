#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of program
 *
 * @ac: Data type
 *
 * @av: Data type
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, size = 0;
	char *val;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		b = 0;
		while (av[a][b])
		{
			size += 1;
			b++;
		}
		size += 1;
	}
	val = malloc((sizeof(char) * size) + 1);
	if (val == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		b = 0;
		while (av[a][b])
		{
			val[c] = av[a][b];
			b++;
			c++;
		}
		val[c] = '\n';
		c++;
	}
	return (val);
}
