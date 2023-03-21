#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 * Return: pointer to newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *owner_cp;
	char *name_cp;
	int name_len = 0;
	int owner_len = 0;
	int i;

	for (; name[name_len]; name_len++)
		;
	for (; owner[owner_len]; owner_len++)
		;

	name_cp = malloc(sizeof(char) * name_len + 1);
	if (name_cp == NULL)
		return (NULL);

	owner_cp = malloc(sizeof(char) * owner_len + 1);
	if (owner_cp == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		name_cp[i] = name[i];
	name_cp[i] = '\0';

	for (i = 0; owner[i]; i++)
		owner_cp[i] = owner[i];
	owner_cp[i] = '\0';

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name_cp;
	d->age = age;
	d->owner = owner_cp;

	return (d);
}
