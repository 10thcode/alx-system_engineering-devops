#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner of the dog
 *
 * Description: This structure stores details about a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
