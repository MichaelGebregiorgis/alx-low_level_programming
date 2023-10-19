#include <stdio.h>

/**
 * before_main - prints before the main function is executed
 *
 * Return: none
 */

void __attribute__ ((consructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
