#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a `struct dog` type variable
 * @d: struct dog
 * @name: string input for the name of the dog
 * @age: integer input for age
 * @owner: string input for owners name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
