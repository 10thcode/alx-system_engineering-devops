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
	char *owner_cp, *name_cp;
	int name_len = 0, owner_len = 0;

	for (; name[name_len]; name_len++)
		;
	for (; owner[owner_len]; owner_len++)
		;
	name_cp = malloc(sizeof(char) * name_len + 1);
	if (name_cp == NULL)
	{
		free(name_cp);
		return (NULL);
	}
	owner_cp = malloc(sizeof(char) * owner_len + 1);
	if (owner_cp == NULL)
	{
		free(name_cp);
		free(owner_cp);
		return (NULL);
	}
	copystr(owner, owner_cp);
	copystr(name, name_cp);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(name_cp);
		free(owner_cp);
		free(d);
		return (NULL);
	}
	d->name = name_cp;
	d->age = age;
	d->owner = owner_cp;

	return (d);
}

/**
 * copystr - copy a string into anothe string variable
 * @src: source
 * @dest: destination
 * Return: void
 */
void copystr(char *src, char *dest)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}

