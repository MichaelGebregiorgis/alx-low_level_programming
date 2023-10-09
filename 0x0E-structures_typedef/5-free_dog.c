#include <stdlib.h>
#include "dog.h"

/**
 * free-dog - frees dogs
 *
 * @b: Data type
 *
 * Return: d
 */

void free_dog(dog_t *b)
{
	if (b)
	{
		free(b->name);
		free(b->owner);
		free(b);
	}
}
