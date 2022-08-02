#ifndef DOG_H
#define DOG_H

/**
 * struct dog - properties of a dog group
 * @name: name of the dog
 * @age: how old the dog is
 * @owner: the name of the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age,
		char *owner);
void print_dog(struct dog *d);

/**
 * og_t: another name of type dog
 */
typedef struct dog dog_t;
#endif
