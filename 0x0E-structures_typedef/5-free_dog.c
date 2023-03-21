#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for dog types
 * @d: the dog type
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
