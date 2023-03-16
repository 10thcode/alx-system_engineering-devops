#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: number of bytes for each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int s;
	int *ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	s = nmemb * size;
	ptr = malloc(s);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
