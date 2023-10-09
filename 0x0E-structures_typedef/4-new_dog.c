#include <stdlib.h>
#include "dog.h"

char *cpy_data(char *dest, char *src);
char *cpy_data(char *dest, char *src);

/**
 * lenstrg - string length
 *
 * @c: Data type
 *
 * Return: 0
 */

int lenstrg(char *c)
{
	int inc;

	for (inc = 0; c[inc]; inc++)
		;
	return (inc);
}

/**
 * cpy_data - copy string
 *
 * @dest: Data type
 *
 * @src: Data type
 *
 * Return: 0
 */

char *cpy_data(char *dest, char *src)
{
	int inc1, inc2;

	for (inc1 = 0; src[inc1] != '\0'; inc1++)
		;
	for (inc2 = 0; inc2 < inc1; inc2++)
	{
		dest[inc2] = src[inc2];
	}
	dest[inc2] = '\0';
	return (dest);
}

/**
 * new_dog - new dog creater
 *
 * @name: Data type
 *
 * @age: Data type
 *
 * @owner: Data type
 *
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dot_t *new_dog;
	int len, len1;

	len = lenstrg(name);
	len1 = lenstrg(owner);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (len1 + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * (len + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		free(new_dog->owner);
		return (NULL);
	}
	cpy_data(new_dog->name, name);
	cpy_data(new_dog->owner, owner);

	new_dog->age = age;
	return (new_dog);
}
