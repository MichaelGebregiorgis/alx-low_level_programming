#include "main.h"
#include <ctype.h>
/**
 * _islower - chaecks if the value is in lowercase
 *@c: data type
 * Return: 0
 */

int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}
	return (0);
}
