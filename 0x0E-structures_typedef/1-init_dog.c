#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a variable of type struct dog
 * @name: the name to be given to the dog
 * @age: the age to be give to the dog
 * @owner: the name to be given to the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
