#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog- create a new object of struct dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog object
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *dog_name, *dog_owner;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	dog_name = malloc(sizeof(*name) * (strlen(name) + 1));
	dog_owner = malloc(sizeof(*owner) * (strlen(owner) + 1));

	if (dog_name == NULL || dog_owner == NULL)
		return (NULL);
	strcpy(dog_name, name);
	strcpy(dog_owner, owner);

	new_dog->name = dog_name;
	new_dog->age = age;
	new_dog->owner = dog_owner;

	return (new_dog);
}

