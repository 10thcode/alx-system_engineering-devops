#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to a variable of struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	printf("%s\n", (d->name == NULL ? "(nil)" : d->name));

	printf("Age: ");
	if (d->age == 0.0)
		printf("(nil)\n");
	else
		printf("%.6f\n", d->age);

	printf("Owner: ");
	printf("%s\n", (d->owner == NULL ? "(nil)" : d->owner));
}
