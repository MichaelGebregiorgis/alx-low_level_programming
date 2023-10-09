#ifndef dog_h
#define dog_h

/**
 * struct dog - data types
 * @name: Data type
 *
 * @age: Data type
 *
 * @owner:  Data type
 */

struct dog
{
	char *owner;
	char *name;
	float age;
};
 /**
  * dog_struc - Type
  */

typedef struct dog dog_struc;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
