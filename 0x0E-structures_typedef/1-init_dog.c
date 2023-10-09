#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable dog struct
 *
 * @name: Data type
 *
 * @age: Data type
 *
 * @owner: Data type
 *
 * @d: Data type
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
}
