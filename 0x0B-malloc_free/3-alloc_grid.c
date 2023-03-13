#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a pointer to a 2 dimensional array of integers.
 * @width: the column of the array
 * @height: the row of the array
 *
 * Return: pointer to an array of width x height
 */
int **alloc_grid(int width, int height)
{
	int **arrays;
	int *array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arrays = malloc(sizeof(int *) * height);

	if (arrays == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array = malloc(sizeof(int) * width);

		if (array == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
			array[j] = 0;

		arrays[i] = array;
	}

	return (arrays);
}
