#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: starting value
 * @max: ending value
 * Return: pointer to array containing values from min to max
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		array[i] = min;

	return (array);
}
