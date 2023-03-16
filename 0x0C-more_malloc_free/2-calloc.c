#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: number of bytes for each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int s, i;
	char *ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);


	s = nmemb * size;
	ptr = malloc(s);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		ptr[i] = '\0';

	return ((void *)ptr);
}
