#include <stddef.h>

/**
 * int_index - searches for an integer.
 * @array: array of intergers
 * @size: number of element in array
 * @cmp: the function to be called
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 1 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if ((*cmp) (array[i]))
			return (i);

	return (-1);
}
