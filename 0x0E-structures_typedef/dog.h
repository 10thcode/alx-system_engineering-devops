#ifndef DOG_H
#define DOG_H

/**
 * dog_t - A dog type
 */
typedef struct dog dog_t;

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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
