#include "dog.h"

/**
 * init_dog - initialize a struct of type dog
 * @d: object of type struct dog
 * @name: the name of the dog
 * @age: how old the dog is
 * @owner: name of the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age,
		char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
