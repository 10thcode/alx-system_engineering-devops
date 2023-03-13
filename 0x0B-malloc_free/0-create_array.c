#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: the specific char
 *
 * Return: pointer to the array
 * or return NULL if size is 0
 * or return NULL if fails to allocate memory
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	for (i = 0; array != NULL && i < size; i++)
		array[i] = c;

	return (array);
}
