#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * digit - digit checker
 *
 * @n: Data type
 *
 * Return: 0
 */
int digit(char *n)
{
	int inc = 0;

	for (;n[inc]; inc++)
	{
		if (n[inc] < '0' || n[inc] > '9')
		{
			return (0);
		}
	}
	return (1);
}
/**
 * lenVal - str length
 *
 * @n: Data type
 *
 * Return: 0
 */
int lenVal(char *n)
{
	int inc1;

	while (n[inc1] != '\0')
	{
		inc1++;
	}
	return (inc1);
}
/**
 * err - errors
 *
 * Return: 0
 */
void err(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiply two +ve numbers
 *
 * @argc: Data type
 *
 * @argv: Data type
 *
 * Return: 0
 */
int main(void)
{
	int argc;
	char *argv[];
	char *c1;
	char *c2;

}
