#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the dog from memory
 * @d: The dog is freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
