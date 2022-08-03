#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees all the memory allocated
 * to obects of type dog
 * @d: the dog object to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
